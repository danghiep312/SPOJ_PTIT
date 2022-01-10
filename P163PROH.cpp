#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        float goc;
        cin >> goc;
        float canh = 2.0/(1.0 - (goc/180.0));
        int tmp = canh;
        if (tmp * 1000 == canh * 1000) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
} 
