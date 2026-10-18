#include <iostream>

using namespace std;

int main(){
    int n, i = 0, r;

    cin >> n;

    int v [n];
    int x;

    while(i < n) {
        cin >> v[i];
        i++;
    }

    cin >> x;

    for(int i = 0; i < n; i++) {
        if(v[i] == x) {
            r = 0;
        }
    }

    if(r == 0) {
        cout << "pertence" << endl;
    } else {
        cout << "nao_pertence" << endl;
    }

    return 0;
}