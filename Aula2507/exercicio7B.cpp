#include <iostream>

using namespace std;

int main(){
    int x, t, i = 1;

    cin >> x;

    while(i < 11) {
        t = x * i;

        cout << x << " * "  << i << " = " << t << endl;

        i++;
    }

    return 0;
}