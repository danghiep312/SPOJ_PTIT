#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    int T;
    cin >> T;
    while (T--) {
        string a;
        long long x, y;
        cin >> a >> x >> y ;
        long long tmp = __gcd(x, y);
        for(int i = 0; i < tmp; i++){
            cout << a;
        }
        cout << endl;
    }
    return 0;
}  
