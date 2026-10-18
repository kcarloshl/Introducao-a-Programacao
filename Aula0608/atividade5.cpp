#include <iostream>

using namespace std;

int main(){
    int v [10], x, teste = 0;

    for(int i = 0; i < 10; i++) {
        cin >> v [i];
    }

    cin >> x;

    for(int i = 0; i < 10; i++) {
        if(x == v [i]) {
            teste++;
        }
    }

    if(teste == 0) {
        cout << "NAO" << endl;
    } else {
        cout << "SIM" << endl;
    }

    return 0;
}