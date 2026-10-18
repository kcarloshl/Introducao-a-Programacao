#include <iostream>
#include "menu.cpp"
#include "dados.cpp"

using namespace std;

const int MAX_FUNCIONARIO = 100;
const int MAX_DEPENDENTE = 100;

int main() {
    Funcionarios f[MAX_FUNCIONARIO];
    Dependente dp[MAX_DEPENDENTE];
    int qtdFuncionario = 0;
    int qtdDependente = 0;
    int op;

    do
    {
        op = menu();
        if (op == 1)
        {
            f[qtdFuncionario] = funcionarios();
            qtdFuncionario++;
        } else if (op == 2)
        {
            dp[qtdDependente] = dependente();
            qtdDependente++;
        }
        else if (op == 3)
        {
            listarFuncionarios(f, qtdFuncionario);
        }
        else if (op == 4)
        {
            listarDependentes(dp, qtdDependente);
        }
        else if (op == 5)
        {
            editarFuncionario(f, qtdFuncionario);
        }
        else if (op == 6)
        {
           qtdFuncionario = excluirFuncionario(f, qtdFuncionario);
           qtdDependente = excluirDependente(dp, f, qtdFuncionario);
        }
        
        else if (op != 0)
        {
            cout << "Numero Invalido" << endl;
        }
        
    } while (op != 0);
    cout << "Saindo..." << endl;



    return 0;
}

