#include <iostream>

using namespace std;

int main(){
    int nq, resultado = 0;
    char gabarito [80], candidato [80];

    cin >> nq;
    cin >> gabarito;
    cin >> candidato;

    for(int i = 0; i < nq; i++) {

        if(gabarito [i] == candidato [i]) {
            resultado++;
        }
    }

    cout << resultado << endl;
}