#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
const ll mod = 1e9 + 7;
 
ll n;
ll f[2][2], m[2][2];
 
void mul(ll f[2][2], ll m[2][2]) {
    ll x = (f[0][0] * m[0][0] % mod + f[0][1] * m[1][0] % mod) % mod;
    ll y = (f[0][0] * m[0][1] % mod + f[0][1] * m[1][1] % mod) % mod;
    ll z = (f[1][0] * m[0][0] % mod + f[1][1] * m[1][0] % mod) % mod;
    ll t = (f[1][0] * m[0][1] % mod + f[1][1] * m[1][1] % mod) % mod;
    f[0][0] = x;
    f[0][1] = y;
    f[1][0] = z;
    f[1][1] = t;
}
 
void pow(ll f[2][2], ll n) {
    if (n <= 1) return;
    pow(f,n/2);
    mul(f,f);
    if (n&1) mul(f, m); //n % 2 == 0 tuong duong n & 1
}
 
void process() {
    f[0][0] = f[0][1] = f[1][0] = 1;
    f[1][1] = 0;
    m[0][0] = m[0][1] = m[1][0] = 1;
    m[1][1] = 0;
 
    cin >> n;
    if (n == 0) {
        cout << 0;
    }
    else {
        pow(f, n - 1);
        cout << f[0][0];
    }
    cout << endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        process();
    }
} 
