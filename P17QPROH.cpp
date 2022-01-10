#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int n;
vector<ll> a, b;
 
void init() {
    cin >> n;
    a.resize(n);
    b.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
}
 
bool check(ll x, ll y) {
    return x > y;
}
 
void process() {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), check);
 
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += (a[i] * b[i]);
    }
    cout << sum << endl;
}
 
int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++) {
        init();
        cout << "Case #" << t << ": ";
        process();
    }
} 
