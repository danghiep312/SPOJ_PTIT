#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll LCM(ll a, ll b) {
    ll tmp1 = a;
    ll tmp2 = b;
    while (b > 0) {
        if (a > b) {
            ll tmp = a;
            a = b;
            b = tmp;
        }
        b %= a;
    }
    return (tmp1/a) * tmp2;
}
 
ll mu10(ll a) {
    ll res = 1;
    for (int i = 0; i < a; i++) {
        res *= 10;
    }
    return res;
}
 
void process() {
    ll x, y, z, n;
    cin >> x >> y >> z >> n;
    ll tmp = LCM(x, LCM(y, z));
    ll i = mu10(n - 1)/tmp;
    if (i % tmp == 0) {
    	cout << i;
    }
    else if (tmp * (i + 1) < mu10(n) && tmp*(i + 1) >= mu10(n - 1)) {
        cout << tmp*(i + 1);
    }
    else {
        cout << "-1";
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
 
