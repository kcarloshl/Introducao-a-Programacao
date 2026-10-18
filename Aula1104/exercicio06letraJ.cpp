#include <iostream>

using namespace std;

int main(){
    double N1, N2;
    double Media;

    cin >> N1 >> N2;

    Media = (N1 * 2 + N2 * 3) / (2 + 3);

    if(Media >= 7.0) {
        cout << "Aprovado" << endl;
    } else if(Media < 3.0) {
        cout << "Reprovado" << endl;
    } else {
        cout << "Final" << endl;
    }

    return 0;
}