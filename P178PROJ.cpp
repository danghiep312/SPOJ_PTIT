#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MOD = 1e9 + 7;
 
priority_queue<ll, vector<ll>, greater<ll>> a;
int n;
 
void init() {
    cin >> n;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push(tmp);
    }
}
 
int main() {
    init();
    ll tmp, res = 0;
    while (a.size() != 1) {
        ll tmp = a.top();
        a.pop();
        tmp += a.top();
        tmp %= MOD;
        a.pop();
        a.push(tmp);
        res += tmp;
        res %= MOD;
    }
    cout << res;
} 
