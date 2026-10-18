#include <iostream>

using namespace std;

int main(){
    double A, B;
    int media;

    cin >> A >> B;

    media = (A + B) / 2;

    if(media >= 7) {
        cout << "Aprovado" << endl;
    } else if(media < 7 && media >= 4) {
        cout << "Recuperacao" << endl;
    } else {
        cout << "Reprovado" << endl;
    }
     
     return 0;
}