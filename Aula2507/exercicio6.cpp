#include <iostream>

using namespace std;

int main(){
    int n, a, lampA = 0, lampB = 0;

    cin >> n;

    for(int i = 0; i < n; i = i + 1) {
        cin >> a;

        if(a == 1) {
            lampA = 1 - lampA;
        } else if(a == 2) {
            lampA = 1 - lampA;
            lampB = 1 - lampB;
        }
    }

    cout << lampA << endl;
    cout << lampB << endl;

    return 0;
}