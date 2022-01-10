#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll LCM(ll a, ll b) {
    return a*b/__gcd(a, b);
}
ll pow10 (ll k) {
    ll res = 1;
    for (int i = 0; i < k; i++) {
        res *= 10;
    }
    return res;
}
 
ll x, y, z, n;
 
void init() {
    cin >> x >> y >> z >> n;
}
 
void process() {
    ll tmp = LCM(LCM(x,y), z);
    ll i = 2;
    
    while (tmp < pow10(n - 1)) {
        //cout << tmp << " ";
        tmp /= (i - 1);
        tmp *= i;
        i++;
    }
    if (tmp >= pow10(n)) {
        cout << -1;
        return;
    }
    else {
        cout << tmp;
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
        process();
        cout << endl;
    }
} 
