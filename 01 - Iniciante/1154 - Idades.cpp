#include <iostream>
 
using namespace std;
 
int main() {
 
   float idade = 1, q = 0, soma = 0;
   
   while(idade > 0){
       cin >> idade;
       if(idade > 0){
           q++;
        soma = soma + idade;
       }
   }
   cout.precision(2);
   cout << fixed;
   cout << soma/q << endl;
 
 
    return 0;
}