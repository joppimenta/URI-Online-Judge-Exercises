#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
   string galopeira;
   int n;
   cin >> n;
   
   
   
   for(int i = 1; i <= n; i++){
       cin >> galopeira;
       float soma = 0;
       for(int j = 0; j < galopeira.size(); j++){
           soma = soma + 0.01;
       }
       printf("%.2f\n", soma);
   }
 
    return 0;
}
