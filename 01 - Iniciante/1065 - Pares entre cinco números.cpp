#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    vector<int> A;
    int a;
    for(int i = 0; i<5;i++){
        cin >> a;
        A.push_back(a);
    }
    int q = 0;
    for(int i = 0; i<5;i++){
        if(A[i]%2==0){
            q++;
        }
        
    }
 cout << q << " valores pares" << endl;;
    return 0;
}