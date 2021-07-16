#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    
    
for(int i = 1; i<=n; i++){
    int n1 = pow(i, 2);
    int n2 = pow(i, 3);
 cout << i << " " << n1 << " " << n2 << endl;
 cout << i << " " << n1 + 1 << " " << n2 + 1 << endl;

    }
 
    return 0;
}
