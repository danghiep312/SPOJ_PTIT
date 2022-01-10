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
 
int m, c;
void solve() {
    cin >> c >> m;
    if (c == 0) {
        cout << "Second";
        return;
    }
    if (c <= m) {
        cout << "First";
        return;
    }
    if (c % (m + 1) == 0) cout << "Second";
    else cout << "First";
}
 
int main() {
    //freopen("test.txt","r", stdin);
    int t;
    cin >> t;
    while (t--) {
        solve();
        cout << endl;
    }
} 
