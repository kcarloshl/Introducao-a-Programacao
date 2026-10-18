#include <iostream>
using namespace std;

int main(){
    int n, a, s = 0, c = 0;

    cin >> n;

    for(int i = 0; s < 1000000; i++) {
        cin >> a;
        s += a;
        c++;
    }

    cout << c << endl;

    return 0;
}