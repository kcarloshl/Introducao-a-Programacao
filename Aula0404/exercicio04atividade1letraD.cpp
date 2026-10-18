#include <iostream>

using namespace std;

int main(){
    float num1, num2;

    cout << "Digite um numero decimal: ";
    cin >> num1;

    cout << "Digite outro numero decimal: ";
    cin >> num2;

    if(num1 > num2) {
        cout << "O numero " << num1 << " e maior." << endl;
    } else if(num1 < num2) {
        cout << "O numero " << num2 << " e maior." << endl;
    } else {
        cout << "Os numeros digitados sao iguais." << endl;
    }

    system("pause");

    return 0;
}