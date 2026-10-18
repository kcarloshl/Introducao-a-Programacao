#include <iostream>

using namespace std;

int main(){
    int n, a, s = 0/*valor inicial dos acessos*/, c/*valor inicial dos dias*/ = 0;

    cin >> n;

    while(s < 1000000) {
        cin >> a;
        s += a;/*mesmo codigo que s = s + a*/
        c++;/*aumentar o numero de dias de 1 em 1, msm codigo q c = c + 1*/
    }

    cout << c << endl;


    return 0;
}