#include <iostream>

using namespace std;

int main(){
    int manipulado, pensado;

    cout << "Pense em numero natural qualquer, depois multiplique este numero por cinco, depois some seis ao resultado, depois multiplique por quatro, depois some nove, depois multiplique por cinco." << endl;
    cout << "Digite o resultado: " << endl;
    cin >> manipulado;

    pensado = (manipulado-165)/100;
    
    cout << "O numero pensado foi: " << pensado << endl;

    system("pause");

    return 0;
}
