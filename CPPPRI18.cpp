#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
ll m, n, a, b;
 
ll result(ll x, ll y, ll k){
    ll index1, index2;
    if (x % k == 0) {
        index1 = x/k;
    }
    else {
        index1 = x/k + 1;
    }
    index2 = y/k;
    return (index2 - index1) + 1;
}
 
void process() {
    cin >> m >> n >> a >> b;
    ll tmp = (a * b)/ __gcd(a, b);
    ll res = result(m, n, a) + result(m, n, b) - result(m, n, tmp);
    cout << res << endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        process();
    }
} 
