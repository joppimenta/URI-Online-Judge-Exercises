#include <iostream>
 
using namespace std;
 
int main() {
 
   int cha;
   int participantes[5];
   
   cin >> cha;
   
   int soma = 0;
   for(int i = 0; i < 5; i++){
       cin >> participantes[i];
       if(participantes[i] == cha){
           soma++;
       }
   }
   
   cout << soma << endl;
 
    return 0;
}
