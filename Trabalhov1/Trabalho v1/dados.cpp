#include <iostream>
using namespace std;

struct Funcionarios
{
    string nome, email, cpf, telefone;
};
struct Dependente
{
    string cpfDependente, cpfDoFuncionario, nomeDependente, dataNascimento;
};
Funcionarios funcionarios()
{
    Funcionarios f;
    cout << "Nome do Funcionario: ";
    getline(cin, f.nome);
    cout << "CPF: ";
    cin >> f.cpf;
    cout << "Telefone: ";
    cin >> f.telefone;
    cout << "Email: ";
    cin >> f.email;
    return f;
}
Dependente dependente()
{
    Dependente dp;

    cout << "Nome: ";
    getline(cin, dp.nomeDependente);
    cout << "CPF: ";
    cin >> dp.cpfDependente;
    cout << "Data de Nascimento: ";
    cin >> dp.dataNascimento;
    cout << "CPF do Funcionario: ";
    cin >> dp.cpfDoFuncionario;
    return dp;
}
void listarFuncionarios(Funcionarios f[], int n)
{
    cout << "---- FUNCIONARIOS ----" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << f[i].nome << endl;
        cout << f[i].cpf << endl;
        cout << f[i].telefone << endl;
        cout << f[i].email << endl;
        cout << "---------------------------" << endl;
    }
}
void listarDependentes(Dependente dp[], int n)
{
    cout << "---- DEPENDENTES ----" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << dp[i].nomeDependente << endl;
        cout << dp[i].cpfDependente << endl;
        cout << dp[i].dataNascimento << endl;
        cout << dp[i].cpfDoFuncionario << endl;
        cout << "---------------------------" << endl;
    }
}
void editarFuncionario(Funcionarios f[], int n)
{
    string cpf;
    cout << "Digite o CPF do funcionario que voce deseja editar: " << endl;
    cin >> cpf;

    for (int i = 0; i < n; i++)
    {
        if (f[i].cpf == cpf)
        {
            cout << "Novo nome: " << endl;
            cin.ignore();
            getline(cin, f[i].nome);
            cout << "Novo Telefone: ";
            cin >> f[i].telefone;
            cout << "Novo Email: ";
            cin >> f[i].email;
            cout << "Funcionario editado!" << endl;
            return;
        }
        else
        {
            cout << "CPF Invalido!" << endl;
        }
    }
}

int excluirFuncionario(Funcionarios f[], int n)
{
    string cpf;
    cout << "Digite o CPF do funcionario que voce deseja excluir: " << endl;
    cin >> cpf;
    int indice;
    for (int i = 0; i < n; i++)
    {

        if (f[i].cpf == cpf)
        {
            indice = i;
            break;
        }
    }
    for (int i = indice; i < n - 1; i++)
    {
        f[i] = f[i + 1];
    }
    n--;
    return n;
}

int excluirDependente(Dependente dp[], Funcionarios f[], int n)
{
    string cpf;
    cout << "Digite o CPF do funcionario para exclusao do dependente: " << endl;
    cin >> cpf;
    int indice;
    for (int i = 0; i < n; i++)
    {
        if (f[i].cpf == cpf)
        {
            indice = i;
            for (int j = indice; j < n - 1; j++)
            {
                dp[j] = dp[j + 1];

            }
            i--;
            n--;
        }
    }
        return n;
}