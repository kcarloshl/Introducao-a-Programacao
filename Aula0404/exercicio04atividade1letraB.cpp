#include <iostream>

using namespace std;

int main(){
    float celsius, fahrenheit;

    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;

    fahrenheit = 1.8 * celsius + 32;

    if((int)fahrenheit == fahrenheit) {
        cout << "A temperatura em Fahrenheit e: " << (int)fahrenheit << " ºF" << endl;
    } else {
        cout << "A temperatura em Fahrenheit e: " << fahrenheit << " ºF" << endl;
    }

    system("pause");

    return 0;
}