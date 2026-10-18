#include <iostream>

using namespace std;

int main(){
    int v [10], i = 0;

    while(i < 10) {
        cin >> v [i];
        i++;
    }

    for(int i = 0; i < 10; i++) {
        if(v [i] % 2 == 0) {
            cout << v [i] << ' ';
        }
    }

    cout << endl;

    for(int i = 0; i < 10; i++) {
        if(v [i] % 2 != 0) {
            cout << v [i] << ' ';
        }
    }

    return 0;
}