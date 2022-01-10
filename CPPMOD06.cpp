#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll mod(string a, ll m) {
    ll c = 0, k;
    for (int i = 0; i < a.size(); i++) {
        k = c*10 + a[i] - 48;
        c = k % m; 
    }
    return c;
}
 
ll sqr(ll x) {
    return x*x;
}
 
ll mu(ll n, ll m, ll k) {
    if (m == 0) return 1 % k;
    else 
        if (m % 2 == 0) 
            return sqr(mu(n, m/2, k)) % k;
        else 
            return n * (sqr(mu(n, m/2, k)) % k) % k;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        ll b, m;
        cin >> a >> b >> m;
        cout << mu(mod(a, m), b, m) % m << endl; 
    }
} 
