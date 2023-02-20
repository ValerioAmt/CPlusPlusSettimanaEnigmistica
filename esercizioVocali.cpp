#include <iostream>
#include <string>
include namespace std;


 int ciSonoVocali(string parola){
 int vocali;
  for (int i = 0; i < parola.lenght(); i++){
    if((parola[i]) == "a" || (parola[i])== "o" || (parola[i] == "i") || (parola[i]) == "o" || (parola[i]) == "u"){
     vocali++;
    }
    
  }
      return vocali;
 }
            //i che va da 0 alla lunghezza della stringa

        
     int main(){

      string word;
      cout << "Inserisci parola";
      cin >> word;
      cout << "nella parola inserita ci sono queste vocali" << ciSonoVocali(word);   
  


}