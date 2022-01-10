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
 
int n;
ll nCr[1003][1003];
void init()
{ //to hop chap j cua i, pham vi khoang 1000;
    int k = 1;
    for (int i = 0; i < 100; i++)
    {
        nCr[i][0] = nCr[i][i] = 1;
        k = i / 2;
        for (int j = 1; j < k + 1; j++)
        {
            nCr[i][j] = nCr[i][i - j] = nCr[i - 1][j] + nCr[i - 1][j - 1];
        }
    }
}
 
void solve() {
    init();
    // f(n) = ((2*n) C n)/ (n + 1)
    while (1) {
        cin >> n;
        if (n == 0) return;
        cout << nCr[2*n][n] / (n + 1) << endl;
    }
}
 
int main() {
    solve();
} 
