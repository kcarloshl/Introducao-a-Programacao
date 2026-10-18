#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int num;
    double raiz;

    cout << "Digite um numero inteiro positivo maior que zero: ";
    cin >> num;

    if(num!=0) {
        raiz = sqrt(num);
    } else {
        raiz = 0;
    }

    cout << "O quadrado do numero e: " << num * num << endl;
    cout << "O cubo do numero e: " << num * num * num << endl;
    cout << "A raiz quadrada do numero e: " << raiz << endl;

    system("pause");

    return 0;
}