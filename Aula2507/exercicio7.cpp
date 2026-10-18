#include <iostream>

using namespace std;

int main(){
    int x, t;

    cin >> x;

    for(int i = 1; i < 11; i = i + 1) {
        t = x * i;

        cout << x << " * "  << i << " = " << t << endl;
    }

    return 0;
}