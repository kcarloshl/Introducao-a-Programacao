#include <iostream>

using namespace std;

int main(){
    int n, l, c, q = 0, i = 0;

    cin >> n;

    while(i < n) {
        cin >> l >> c;
        if(l > c) {
            q += c;
        }
        i++;
    }

    cout << q << endl;
    
    return 0;
}