#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    int q, i = 0;
    double n;

    cin >> q;

    while(i < q) {
        cin >> n;
        cout << fixed << setprecision(4) << sqrt(n) << endl;

        i = i + 1;
    }
    
    return 0;
}