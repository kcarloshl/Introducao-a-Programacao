#include <iostream>

using namespace std;

int main(){
    int ini, fim;

    cout << "Digite o intervalo: ";
    cin >> ini >> fim;

    for(int i = ini; i <= fim; i = i + 1) {
        if(i % 2 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}