#include <iostream>
#include <string>
using namespace std;

int main(){

string parolaInserita;                  //facciamo inserire una parola
cout << "Inserisci una parola";
cin >> parolaInserita;
                                         //utilizziamo un ciclo di for 
for (int i = (parolaInserita.length()-1);i > 0;i--)
                cout << parolaInserita[i - 1] ;




}