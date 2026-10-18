#include <iostream>

using namespace std;

int main(){
    float arquivo, taxa;
    float tempo;

    cout << "Digite o tamanho do arquivo em megabyte: ";
    cin >> arquivo;
    cout << "Digite a velocidade de transmissao com megabites: ";
    cin >> taxa;

    tempo = arquivo/(taxa/8);

    cout << "Tempo de transmissao: " << tempo << endl;

    system("pause");

    return 0;
}