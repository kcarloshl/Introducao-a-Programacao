#include <iostream>

using namespace std;

int menu() {
    int op;
    cout << "1. Cadastrar Funcionario." << endl;
    cout << "2. Cadastrar Dependente." << endl;
    cout << "3. Listar Funcionarios." << endl;
    cout << "4. Listar Dependente." << endl;
    cout << "5. Editar Funcionario." << endl;
    cout << "6. Excluir Funcionario." << endl;
    cout << "0. Sair." << endl;   
    cin >> op;
    cin.ignore();
    return op;
}