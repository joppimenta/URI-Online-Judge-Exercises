#include <iostream>
 
using namespace std;
 
int main() {
 
   string sheldon;
   string raj;
   int n;
   
   cin >> n;
   
   for(int i = 1; i <= n; i++){
       cin >> sheldon >> raj;
       if(sheldon == raj){
           cout << "Caso #" << i << ": De novo!" << endl;
       }
       else if(sheldon == "papel" && (raj == "pedra" || raj == "Spock")){
           cout << "Caso #" << i << ": Bazinga!" << endl;
       }
       else if(sheldon == "tesoura" && (raj == "papel" || raj == "lagarto")){
           cout << "Caso #" << i << ": Bazinga!" << endl;
       }
       else if(sheldon == "pedra" && (raj == "lagarto" || raj == "tesoura")){
            cout << "Caso #" << i << ": Bazinga!" << endl;

       }
       else if(sheldon == "lagarto" && (raj == "Spock" || raj == "papel")){
            cout << "Caso #" << i << ": Bazinga!" << endl;
           
       }
       else if(sheldon == "Spock" && (raj == "tesoura" || raj == "pedra")){
            cout << "Caso #" << i << ": Bazinga!" << endl;

        }
        else{
            cout << "Caso #" << i << ": Raj trapaceou!" << endl;
        }
       
   }
    
    return 0;
}
