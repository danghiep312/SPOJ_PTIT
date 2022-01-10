#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
bool checkSqr(ll n) {
    ll x = sqrt(n);
    if (x * x == n) return true;
    return false;
}
 
bool check(ll n) {
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (checkSqr(i) && sqrt(i) > 1) return false;
            if (checkSqr(n/i) && sqrt(n/i) > 1) return false;
        }
    }
    return true;
}
 
vector<ll> a;
 
void init() {
    ll n;
    cin >> n;
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            a.push_back(i);
            if (i != n/i) {
                a.push_back(n/i);
            }
        }
    }    
    sort (a.begin(), a.end());
}
 
void process() {
    for (ll i = a.size() - 1; i >= 0; i--) {
        if (check(a[i])) {
            cout << a[i];
            break;
        }
    }
}
 
int main() {
    init();
    process();
} 
