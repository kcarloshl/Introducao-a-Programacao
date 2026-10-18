#include <iostream>

using namespace std;

int main(){
    int base, expoente, resultado;

    cout << "Digite um numero inteiro: ";
    cin >> base;

    cout << "Digite outro numero inteiro: ";
    cin >> expoente;

    if(base > 0) {
        resultado = 1;
        for(int i = 1; i <= expoente; i++) {
            resultado *= base;
        }
        cout << "O valor da potencia e: " << resultado << endl;
    } else {
        cout << "O primeiro numero nao pode ser menor ou igual a zero" << endl;
    }

    system("pause");

    return 0;
}