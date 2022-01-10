#include <bits/stdc++.h>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define endl '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef double db;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const ll MOD = 1e9 + 7;
const long long o = 2*1e5 + 1;
 
ll totalWay(ll n, ll k) {
    ll dp[n + 1];
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    // dp[i] = dp[i - 1] + ... + dp[i - k] = 2 * dp[i - 1] - dp[i - k - 1];
    // dp[i + 1] = 2 * dp[i] - dp[i - k];
    for (int i = 3; i <= n; i++) {
        if (i > k) {
            dp[i] = ( (2 * dp[i - 1]) % MOD - dp[i - k - 1] % MOD + MOD) % MOD;
        }
        else {
            dp[i] = (2 * dp[i - 1]) % MOD;
        }
    }
    return dp[n];
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        cout << totalWay(n, k) << endl;
    }
} 
