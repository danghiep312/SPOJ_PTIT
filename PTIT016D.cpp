#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
ll n, k;
vector<ll> a;
void init() {
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin() + 1, a.end(), greater<int>());
}
 
void process() {
    ll sum = 0;
    for (int i = 0; i <= k; i++) {
        sum += a[i];
    }
    for (int i = k + 1; i < n; i++) {
        sum -= a[i];
    }
    cout << sum;
}
 
int main() {
    init();
    process();
} 
