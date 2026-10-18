#include <iostream>
using namespace std;

int main (){
    int x, v1, v2, c = 1, s = 1, i = 1;

    cin >> x;

    if(x == 0) {
        cout << 0 << endl;
        return 0;
    }

    cin >> v1;

    while( i < x) {
        cin >> v2;

        if(v2 == v1){
            s = s + 1;
        } else {
            c = max(c, s);
            s = 1;
        }
        v1 = v2;
        i++;
    }

     cout << max(c, s) << endl;

    return 0;
}