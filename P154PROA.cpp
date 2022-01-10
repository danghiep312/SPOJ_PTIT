#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll nhan(ll n, ll m, ll k) {
    if (m == 0) return 0;
    if (m % 2 == 0) return nhan(n*2 % k, m/2, k) %k;
    else {
        return (nhan(n % k, m - 1, k) % k + n % k) % k;
    }
}
 
ll luythua(ll n, ll m, ll k) {
    if (m == 0) return 1;
    ll p = luythua(n, m/2, k);
    ll res = nhan(p, p, k);
    if (m % 2 == 0) return res;
    return nhan(res, n, k) % k;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, m, k;
        cin >> n >> m >> k;
        cout << luythua(n, m, k) << endl;
    }
} 
