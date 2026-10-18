#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    int v[n];
    int x;

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    cin >> x;

    int i;

    for(i = 0; i < n; i++) {
        if(v[i] == x) {
            cout << "pertence" << endl;
            break;
        }
    }

    if(i == n) {
        cout << "nao_pertence" << endl;
    }

    return 0;
}