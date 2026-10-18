#include <iostream>

using namespace std;

int main(){
    int v1, v2, v3, v4, v5, v6;
    double media;

    cout << "Digite 6 numeros inteiros: ";
    cin >> v1;
    cin >> v2;
    cin >> v3;
    cin >> v4;
    cin >> v5;
    cin >> v6;

    media = (v1+v2+v3+v4+v5+v6)/6.0;

    cout << "Media: " << media << endl;

    system("pause");

    return 0;
}