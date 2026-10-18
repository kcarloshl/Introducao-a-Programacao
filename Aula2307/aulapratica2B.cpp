#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n;

    cout << "Digite: ";
    cin >> n;

    for(/*vazio*/; n != 0; /*vazio*/) {
        cout << "Raiz: " << sqrt(n) << endl;
        cout << "Digite: ";
        cin >> n;
    }

    return 0;
}