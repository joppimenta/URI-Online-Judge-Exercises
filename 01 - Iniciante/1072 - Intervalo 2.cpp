#include <iostream>
 
using namespace std;
 
int main() {
 
   int n, s = 0, q = 0, c = 0;
   cin >> n;
   
   for(int i = 1; i<=n; i++){
       cin >> s;
       if(s>=10 and s<=20){
           q++;
       }
       else{
        c++;   
       }
   }
   
   cout << q << " in" << endl;
   cout << c << " out" << endl;
 
    return 0;
}