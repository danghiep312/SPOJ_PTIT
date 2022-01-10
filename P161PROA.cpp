#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
bool isPrime(ll n) {
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}
 
bool cp (ll n) {
    ll x = sqrt(n);
    if (x * x == n) return true;
    return false;
}
 
vector<ll> a;
ll n;
void init() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
 
void process() {
    for (int i = 0; i < n; i++) {
        if (cp(a[i])) {
            ll tmp = sqrt(a[i]);
            if (isPrime(tmp)) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
        else {
            cout << "NO" << endl;
        }
    }
}
 
int main() {
    init();
    process();
} 
