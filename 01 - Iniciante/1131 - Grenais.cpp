#include <iostream>
 
using namespace std;
 
int main() {
 
    int n = 0;
    int i, g, vi = 0, vg = 0, emp = 0, part = 0;
    
    while(n!=2){
        cin >> i >> g;
        if(i > g){
            vi++;
        }
        else if(g > i){
            vg++;
        }
        else if(i==g){
            emp++;
        }
        part++;
        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> n;
    }
    
    cout << part << " grenais" << endl;
    cout << "Inter:" << vi << endl;
    cout << "Gremio:" << vg << endl;
    cout << "Empates:" << emp << endl;
    if(vi>vg){
        cout << "Inter venceu mais" << endl;
    }
    else if(vg>vi){
        cout << "Gremio venceu mais" << endl;
    }
    else if(vg==vi){
        cout << "Nao houve vencedor" << endl;
    }

    
    return 0;
}