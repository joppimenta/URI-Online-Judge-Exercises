#include <iostream>
 
using namespace std;
 
int main() {
 
  int v[100];
  int maior = 0, posimaior = 0;
  
  for(int i = 0; i<100; i++){
      cin >> v[i];
  }
  
  for(int i = 0; i <100; i++){
      if(v[i] > maior){
          maior = v[i];
          posimaior = i+1;
      }
  }
  
  cout << maior << endl;
  cout << posimaior << endl;
 
    return 0;
}