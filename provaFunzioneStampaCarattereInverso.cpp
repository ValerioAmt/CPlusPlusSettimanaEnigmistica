#include <iostream>
#include <string>
using namespace std;



string stampaCaratteriInversi(string parolaInserita){

    for (int i = (parolaInserita.length());i > 0;i--){
        cout << parolaInserita[i - 1];
    } 
}



int main(){
string parola;
    cout << "Inserisci una parola" << endl;
    cin >> parola;
            
    cout << stampaCaratteriInversi(parola);
}