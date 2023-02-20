#include <iostream>
#include <string>
using namespace std;

int main()
{
    string inserimento;
    cout << "Inserisci una stringa di caratteri\n";
    cin >> inserimento;
    int conta = 0;
    int i = 0;
    while (i < inserimento.length())
    {
        for(y=inserimento[0];i<inserimento.length();y++)
                


        if (inserimento[i] == inserimento[i + 1])
        { conta + 1;
        }
        
    }
    cout << conta;
}
