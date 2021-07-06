#include <iostream>
 
using namespace std;
 
int main() {
 
    int n = 0;
    
    while(n!=2002){
        cin >> n;
        if(n==2002){
            break;
        }
        cout << "Senha Invalida" << endl;
    }
    cout << "Acesso Permitido" << endl;
    return 0;
}