#include <iostream>

using namespace std;

int main(){
    int v[10];
    int i = 0, menor;

    while(i < 10) {
        cin >> v[i];
        i++;
    }

    menor = v[0];

    for(int i = 1; i < 10; i++) {

        if(v[i] < menor) {
            menor = v[i];
        }
    }

    cout << "Menor: " << menor << endl;
    
    cout << "Ocorrencias: ";
    for(int i = 0; i < 10; i++) {

        if(v[i] == menor) {
            cout << i << ' ';
        }
    }

    cout << endl;

    for(int i = 0; i < 10; i++) {
        if(v[i] == menor) {
            v[i] = -1;
        }
    }

    for(int i = 0; i < 10; i++) {
        cout << v[i] << ' ';
    }

    return 0;
}