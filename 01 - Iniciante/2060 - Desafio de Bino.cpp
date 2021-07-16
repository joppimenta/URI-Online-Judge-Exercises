#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    int numeros[1001];
    cin >> n;
    
    int multi2 = 0, multi3 = 0, multi4 = 0, multi5 = 0;
    
    for(int i = 0; i < n; i++){
        cin >> numeros[i];
        if(numeros[i]%2 == 0){
            multi2++;
        }
        if(numeros[i]%3 == 0){
            multi3++;
        }
        if(numeros[i]%5 == 0){
            multi5++;
        }
        if(numeros[i]%4 == 0){
            multi4++;
        }
    }
    
    cout << multi2 << " Multiplo(s) de 2" << endl;
    cout << multi3 << " Multiplo(s) de 3" << endl;
    cout << multi4 << " Multiplo(s) de 4" << endl;
    cout << multi5 << " Multiplo(s) de 5" << endl;

 
    return 0;
}
