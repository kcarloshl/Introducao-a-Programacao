#include <iostream>

using namespace std;

int main(){
    int x;

    cin >> x;

    for(int i = 1; i <= x; i = i + 1/*poderia ser utilizado o i++*/) {
        if(x % i == 0) {
            cout << i << ' ';
        }
    }

    return 0;
}