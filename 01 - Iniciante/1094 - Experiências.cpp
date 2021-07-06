#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
float n, tot = 0, c = 0, r = 0, s = 0;
char q;
float l;

cin >> n;

for(int i = 1; i <=n; i++){
    cin >> l >> q;
    if(q=='C'){
        tot = tot + l;
        c = c + l;
    }
    else if(q=='R'){
        tot = tot + l;
        r = r + l;
    }
    else if(q=='S'){
        tot = tot + l;
        s = s + l;
    }
    
}
    cout << "Total: " << tot << " cobaias" << endl;
    cout << "Total de coelhos: " << c << endl;
    cout << "Total de ratos: " << r << endl;
    cout << "Total de sapos: " << s << endl;
    cout.precision(2);
    cout << fixed;
    cout << "Percentual de coelhos: " << (c/tot)*100 << " %" << endl;
    cout << "Percentual de ratos: " << (r/tot)*100 << " %" << endl;
    cout << "Percentual de sapos: " << (s/tot)*100 << " %" << endl;

    return 0;
}