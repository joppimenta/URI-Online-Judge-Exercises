#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
    string pessoa;
    int forca;
    
    for(int i = 1; i <=n; i++){
        cin >> pessoa >> forca;
        if(pessoa == "Thor"){
            cout << 'Y' << endl;
        }
        else{
            cout << 'N' << endl;
        }
    }
 
    return 0;
}
