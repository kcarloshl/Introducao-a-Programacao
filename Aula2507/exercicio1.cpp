#include <iostream>

using namespace std;

int main(){
    int n, l, c, q;
    q = 0;/*contador de copos quebrados começa com 0*/

    cin >> n;/*numero de bandeija*/

    for(int i = 0; i < n; i = i + 1)/*condiçao i menor q n*/ {
        cin >> l >> c;/*codigo loop*/
        if(l > c) {
            q = q + c;/*soma dos copos quebrados, adicionado quando quebra*/
        }
    }

    cout << q << endl;

    return 0;
}