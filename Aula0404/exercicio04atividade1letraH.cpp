#include <iostream>

using namespace std;

int main(){
    int nota1, nota2, nota3, nota4, recup, soma, nota, media;

    cout << "Digite a nota do primeiro bimestre: ";
    cin >> nota1;
    cout << "Digite a nota do segundo bimestre: ";
    cin >> nota2;
    cout << "Digite a nota do terceiro bimestre: ";
    cin >> nota3;
    cout << "Digite a nota do quarto bimestre: ";
    cin >> nota4;
    cout << "Digite a nota da recuperacao: ";
    cin >> recup;

    soma = nota1 + nota2 + nota3 + nota4;

    if(soma >= 60) {
        cout << "O estudante esta aprovado com nota: " << soma << endl;
    } else {
        if(soma > recup) {
            nota = soma;
        } else {
            nota = recup;
        } if(nota >= 60) {
            cout << "O estudante esta aprovado com nota: " << nota << endl;
        } else {
            cout << "O estudante esta reprovado com nota: " << nota << endl;
        }
    }

    system("pause");

    return 0;
}