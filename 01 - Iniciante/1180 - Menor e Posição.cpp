#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    int v[n];
    int menor, pos = 0;
    
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    menor = v[0];
    
    for(int i = 0; i<n; i++){
        if(v[i]<menor){
            menor = v[i];
            pos = i;
        }
    }
    
    cout << "Menor valor: " << menor << endl;
    cout << "Posicao: " << pos << endl;
 
    return 0;
}