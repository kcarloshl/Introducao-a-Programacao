#include <iostream>

using namespace std;

int main(){
    int T1, T2, T3;

    cin >> T1 >> T2 >> T3;

    if(T1 < T2 && T1 < T3 && T2 < T3) {
        cout << 1 << endl;
        cout << 2 << endl;
        cout << 3 << endl;
    } else if(T1 < T2 && T1 < T3 && T2 > T3) {
        cout << 1 << endl;
        cout << 3 << endl;
        cout << 2 << endl;
    } else if(T1 > T2 && T1 < T3 && T2 < T3) {
        cout << 2 << endl;
        cout << 1 << endl;
        cout << 3 << endl;
    } else if(T1 > T2 && T1 > T3 && T2 < T3) {
        cout << 2 << endl;
        cout << 3 << endl;
        cout << 1 << endl;
    } else if(T1 > T2 && T1 > T3 && T2 > T3) {
        cout << 3 << endl;
        cout << 2 << endl;
        cout << 1 << endl;
    } else {
        cout << 3 << endl;
        cout << 1 << endl;
        cout << 2 << endl;
    }

    return 0;
}