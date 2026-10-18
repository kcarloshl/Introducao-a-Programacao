#include <iostream>

using namespace std;

int main(){
    double medida, metros, polegadas, jardas, milhas;

    cout << "Digite uma medida em pes: ";
    cin >> medida;

    metros = medida * 0.3048;

    polegadas = medida * 12;

    jardas = medida / 3;

    milhas = medida * 0.000189394;

    cout << "A medida " << medida << " pes equivale a: " << endl;
    cout << " - " << metros << " metros" << endl;
    cout << " - " << polegadas << " polegadas" << endl;
    cout << " - " << jardas << " jardas" << endl;

    if(milhas > 1) {
        cout << " - " << milhas << " milhas" << endl;
    } else {
        cout << " - " << 1 / milhas << " milhas" << endl;
    }

    system("pause");

    return 0;
}