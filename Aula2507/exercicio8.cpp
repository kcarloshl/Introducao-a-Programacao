#include <iostream>

using namespace std;

int main(){
    int x, v1, v2, consec = 1, sequen = 1;

    cin >> x;

    if(x == 0) {
        cout << 0 << endl;
        return 0;
    }

    cin >> v1;

    for(int i = 1; i < x; i =  i + 1) {
        cin >> v2;

        if(v2 == v1){
            sequen =  sequen + 1;
        } else {
            consec = max(consec, sequen);
            sequen = 1;
        }
        v1 = v2;
    }

    cout << max(consec, sequen) << endl;

    return 0;
}