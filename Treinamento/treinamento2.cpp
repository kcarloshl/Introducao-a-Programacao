#include <iostream>

using namespace std;

int main(){
    int idade;
    char sexo;

    cout << "Algoritimo de Lista de Vacina." << endl;
    cout << "Digite a idade: ";
    cin >> idade;
    cout << "Digite o sexo: ";
    cin >> sexo;

    if(idade < 10) {
        cout << "Tomar vacina A, B, C, D e E." << endl;
    } else if(idade < 14 && sexo == 'F') {
        cout << "Tomar vacina F e G." << endl;
    } else if(idade < 14 && sexo == 'M') {
        cout << "Tomar vacina G." << endl;
    } else if(idade < 60) {
        cout << "Tomar vacina H." << endl;
    } else {
        cout << "Tomar vacina X e Y." << endl;
    }
    system("pause");

    return 0;
}