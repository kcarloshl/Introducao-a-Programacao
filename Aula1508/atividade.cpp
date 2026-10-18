#include <iostream>

using namespace std;

int main(){
    string nomes [100];
    int idades [100];
    char sexo [100], opcao;

    double mediaH = 0, mediaM = 0, mediaG, mediaHomens, mediaMulhesres;
    int Qh = 0, Qm = 0, QhA = 0, QmA = 0, PMV = -1, qp = 0;
    string pessoaMV;

    for(int i = 0; i < 100; i++) {
        cout << "Nome: ";
        cin >> nomes [i];
        cout << "Idade: ";
        cin >> idades [i];
        cout << "Sexo: ";
        cin >> sexo [i];
        cout << "Gostaria de digitar outra pessoa:[s,n] ";
        cin >> opcao;
        if(opcao == 'n') {
            break;
        } else {
            qp++;
        }
    }

    for(int i = 0; i < qp; i++) { /*soma das medias dos homens e mulheres e quantidade de respectivos*/
        if(sexo [i] == 'M') {
            mediaH += idades [i];
            Qh++;
        } else if(sexo [i] == 'F') {
            mediaM += idades [i];
            Qm++;
        }
    }

    mediaHomens = mediaH * 1.0 / Qh; /*idade media dos homens */
    mediaMulhesres = mediaM * 1.0 / Qm; /*idade media das mulheres*/
    mediaG = (mediaH + mediaM) / (Qh + Qm); /*idade media geral*/

    for(int i = 0; i < qp; i++) { /*quantidade de pessoas acima da media geral*/
        if(sexo [i] == 'M' && idades [i] > mediaG) {
            QhA++;
        } else if(sexo [i] == 'F' && idades [i] > mediaG) {
            QmA++;
        }
    }

    for(int i = 0; i < qp; i++) { /*pessoa mais velha*/
           if(idades [i] > PMV) {
            pessoaMV = nomes [i];
            PMV = idades [i];
        }
    }

    cout << "A media de idades dos homens: " << mediaHomens << endl;
    cout << "A media de idades das mulheres: " << mediaMulhesres << endl;
    cout << "A media de idades das pessoas: " << mediaG << endl;
    cout << "A quantidade de homens acima da media geral: " << QhA << endl;
    cout << "A quantidade de mulheres acima da media geral: " << QmA << endl;
    cout << "A pessoa mais velha e: " << pessoaMV << ", e a sua idade e: " << PMV << endl;

    return 0;
}