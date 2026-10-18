#include <iostream>

using namespace std;

int main(){
    int A, B;

    cin >> A >> B;

    if(A == 1 && B == 1) {
        cout << "A" << endl;
    } else if(A == 1 && B == 0) {
        cout << "B" << endl;
    } else {
        cout << "C" << endl;
    }

    return 0;
}