#include <iostream>

using namespace std;

int main()
{
    int v[10], x, i = 0, vezes = 0;

    while (i < 10)
    {
        cin >> v[i];
        i++;
    }

    cin >> x;

    for (int i = 0; i < 10; i++)
    {
        if (v[i] == x)
        {
            vezes++;
        }
    }

    if (vezes == 0)
    {
        cout << "Mia x" << endl;
    }
    else
    {
        cout << vezes << endl;

        for (int i = 0; i < 10; i++)
        {
            if (v[i] == x)
            {
                cout << i << ' ';
            }
        }
    }

    return 0;
}