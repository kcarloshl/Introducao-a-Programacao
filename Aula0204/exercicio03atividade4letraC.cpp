#include <iostream>

using namespace std;

int main(){
    double v1, v2, v3, v4, v5;
    double p1, p2, p3, p4, p5;
    double media;

    cout << "Digite os 5 valores decimais: ";
    cin >> v1;
    cin >> v2;
    cin >> v3;
    cin >> v4;
    cin >> v5;
    cout << "Digite os respectivos pesos de cada valor: ";
    cin >> p1;
    cin >> p2;
    cin >> p3;
    cin >> p4;
    cin >> p5;

    media = ((v1*p1)+(v2*p2)+(v3*p3)+(v4*p4)+(v5*p5))/(p1+p2+p3+p4+p5);

    cout << "Media: " << media << endl;

    system("pause");

    return 0;
}