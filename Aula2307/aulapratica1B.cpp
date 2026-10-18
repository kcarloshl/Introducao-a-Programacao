#include <iostream>

using namespace std;

int main(){
    int n, c;

    cin >> n;
    cin >> c;

    for(/*vazio*/; n <= c; n =  n + 2) {
        cout << n << endl;
    }

    return 0;
}