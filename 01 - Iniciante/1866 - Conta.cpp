#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    int soma = 0;
    
    int c;
    
    for(int i = 1; i <= n; i++){
        cin >> c;
        for(int j = 1; j<=c;j++)
        if(j%2 == 1){
            soma = soma +1;
        }
        else{
            soma = soma -1;
        }
        cout << soma << endl;
        soma = 0;
    }
    

 
    return 0;
}
