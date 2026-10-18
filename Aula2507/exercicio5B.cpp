#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int q;
    double n;

    cin >> q;

    for(int i = 0; i < q; i++) {
        cin >> n;
        cout << fixed << setprecision(4) << sqrt(n) << endl;
    }

    return 0;
}