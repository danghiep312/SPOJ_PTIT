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
 
vi a;
int n, s, res = 1e8;
void init() {
    cin >> n >> s;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
 
void Try(int i, int sum, int count) {
 
    if (sum == s) {
        if (count < res) res = count;
    }
    if (sum > s || count > res || i >= n) return;
    Try(i + 1, sum + a[i], count + 1);
    Try(i + 1, sum, count);
}
 
int main() {
    //freopen("test.txt", "r", stdin);
    int t = 1;
    //cin >> t;
    while (t--) {
        init();
        Try(0,0,0);
        if (res == 1e8) cout << "-1";
        else cout << res;
    }
} 
