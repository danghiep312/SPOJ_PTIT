#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int t;
 
ll mod(string a, ll b) {
    ll c = 0, k;
    for (int i = 0; i < a.size(); i++) {
        k = c*10 + a[i] - 48;
        c = k % b;
    }
    return c;
}
 
void process() {
    string a;
    ll b;
    cin >> a >> b;
    cout << mod(a, b) << endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        process();
    }
} 
