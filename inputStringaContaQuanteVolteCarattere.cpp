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
    char y;
    char z;
    while (i < inserimento.length())
    {
        for(y=inserimento[0];i<inserimento[inserimento.length()];y++)                     //posizione y che confronterà i valori con altra posizione z
                
                for(z = inserimento[+1]; z < inserimento[inserimento.length()]; z++){
                       if (y = z){
                        conta += 1;
                       }
                } 

             i++;
        
        
    }
    cout << conta;
}
