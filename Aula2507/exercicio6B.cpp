#include <iostream>

using namespace std;

int main(){
    int n, a, lampA = 0, lampB = 0, i =0;

    cin >> n;

    while(i < n) {
        cin >> a;

        if(a == 1) {
            lampA = 1 - lampA;
        } else if(a == 2) {
            lampA = 1 - lampA;
            lampB = 1 - lampB;
        }
        i++;
    }

    cout << lampA << endl;
    cout << lampB << endl;

    return 0;
}