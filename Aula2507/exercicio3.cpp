#include <iostream>
#include <cmath>/*biblioteca para utilizar o pow(comando de potencia)*/
#include <iomanip>/*biblioteca para utilizar o setprecision(precisao no numero de casas decimais)*/

using namespace std;

int main(){
    double x, y;

    cin >> x >> y;
    cout << fixed << setprecision(4) << pow(x,y);
    
    return 0;
}