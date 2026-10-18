#include <iostream>

using namespace std;

int main(){
    int gf1, gf2, gf3, gf4, gf5;
    int gs1, gs2, gs3, gs4, gs5;
    int saldo;

    cout << "Digite os 5 valores de gols feitos pelo seu time: ";
    cin >> gf1;
    cin >> gf2;
    cin >> gf3;
    cin >> gf4;
    cin >> gf5;
    cout << "Digite os 5 valores de gols sofridos pelo seu time: ";
    cin >> gs1;
    cin >> gs2;
    cin >> gs3;
    cin >> gs4;
    cin >> gs5;

    saldo = (gf1+gf2+gf3+gf4+gf5)-(gs1+gs2+gs3+gs4+gs5);

    cout << "O saldo de gols do seu time e: " << saldo << endl;

    system("pause");

    return 0;
}