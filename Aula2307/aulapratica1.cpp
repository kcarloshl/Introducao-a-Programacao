#include <iostream>

using namespace std;

int main(){
    int n, c;

    cin >> n;
    cin >> c;

    while(n <= c) {
        cout << n << endl;
        n = n + 2;
    }

    return 0;
}