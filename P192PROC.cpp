#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
vector<ll> a;
ll n;
 
void init() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i != 0) {
            a[i] += a[i - 1];
        }
        //cout << a[i] << " ";
    }
}
 
void process() {
    ll res = a[0]*(a[n - 1] - a[0]);
    for (int i = 1; i < n; i++) {
        //cout << res << " ";
        ll tmp = (a[i] - a[i - 1])*(a[n - 1] - a[i]);
        res += tmp;
    }
    cout << res;
}
 
int main() {
    init();
    process();
} 
