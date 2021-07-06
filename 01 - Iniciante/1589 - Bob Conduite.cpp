#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    
    int r1, r2, raio = 0;
    
    for(int i = 1; i<=n; i++){
        cin >> r1 >> r2;
        raio = r1 + r2;
        cout << raio << endl;
            
    }
    return 0;
}