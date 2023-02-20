#include <iostream>
#include <string>
using namespace std;

int main(){

string parolaInserita;                  //facciamo inserire una parola
cout << "Inserisci una parola\n";
cin >> parolaInserita;
                                         //utilizziamo un ciclo di for 
for (int i = (parolaInserita.length());i > 0;i--)   // il for sarà per i che va dall'ultima lettera della parola alla prima e la stamperà
                cout << parolaInserita[i - 1] << endl ;




}