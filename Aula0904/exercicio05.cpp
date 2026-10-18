#include <iostream>

using namespace std;

int main(){
    double peso, altura, imc;

    cout << "Digite seu peso: ";
    cin >> peso;

    cout << "Digite sua altura: ";
    cin >> altura;

    imc = peso / (altura * altura);

    cout << "Seu IMC e: " << imc << endl;

    if(imc < 18.5) {
        cout << "Voce esta abaixo do peso." << endl;
    } else if(imc > 18.5 && imc < 24.9) {
        cout << "Voce esta no peso ideal." << endl;
    } else if(imc > 25.0 && imc < 29.9) {
        cout << "Voce esta com sobrepeso." << endl;
    } else if(imc > 30.0 && imc < 34.9) {
        cout << "Voce esta com obesidade grau I." << endl;
    } else if(imc > 35.0 && imc < 39.9) {
        cout << "Voce esta com obesidade grau II (Severa)." << endl;
    } else {
        cout << "Voce esta com obesidade grau III (Grave)." << endl;
    }

    system("pause");

    return 0;
}