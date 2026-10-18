#include <iostream>

using namespace std;

int main(){
    int num;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    if(num < 0) {
        num = num;
    }

    cout << "O valor absoluto desse numero e: " << num << endl;

    system("pause");

    return 0;
}