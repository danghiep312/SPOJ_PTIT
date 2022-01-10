#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
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
        ll x, y, p;
        cin >> x >> y >> p;
        cout << mu(x, y, p) << endl;
    }
} 
