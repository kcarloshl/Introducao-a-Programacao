#include <iostream>

using namespace std;

int main(){
    string process = "Processamento de Dados";
    float num = 0.4;
    string nume = "4.5E10";
    bool verdade = true;
    char duvida = '?';
    string space = "     ";
    float numero = -5.3E-02;
    string km = "05";
    string falso = "FALSE";
    int nada = 0;

    cout << process << endl;
    cout << "Taxa: " <<  num << endl;
    cout << "Salario por Dias Trabalhados: " << nume << endl;
    cout << "Verdadeiro ou Falso: " << verdade << endl;
    cout << "Alguma Duvida" << duvida << endl;
    cout << space << endl;
    cout << "Temperatura de Resfriamento: " << numero << endl;
    cout << "KM ate a faculdade: " << km << endl;
    cout << "Verdadeiro ou Falso: " << falso << endl;
    cout << "Faltas na materia IAP: " << nada << endl;

    system("pause");

    return 0;
}