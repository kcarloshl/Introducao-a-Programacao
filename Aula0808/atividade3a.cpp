#include <iostream>

using namespace std;

int main(){
    int vetor[10];
    int menor;

    for(int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }

    menor = vetor[0];
    for(int i = 1; i < 10; i++) {
        if(vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    cout << "Menor: " << menor << endl;

    cout << "Ocorrencias: ";
    for(int i = 0; i < 10; i++) {
        if(vetor[i] == menor) {
            cout << i << " ";
        }
    }
    cout << endl;

    for(int i = 0; i < 10; i++) {
        if(vetor[i] == menor) {
            vetor[i] = -1;
        }
    }

    for(int i = 0; i < 10; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;

    return 0;
}