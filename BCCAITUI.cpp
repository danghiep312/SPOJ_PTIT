#include <bits/stdc++.h>
using namespace std;
int n, M;
struct item
{
    int w = 0, v = 0;
};
 
item a[105];
int dp[105][105]; 
// dp[i][j] = max value voi j la khoi luong max co
// the tai mon hang thu i
int res = 0;
void solve() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= M; j++) {
            if (j < a[i].w) {
                dp[i][j] = dp[i - 1][j];
            }
            else 
                dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - a[i].w] + a[i].v);
            res = max(res, dp[i][j]);
        }
    }
}
 
int main() {
    cin >> n >> M;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].w >> a[i].v;
    }
    solve();
    cout << res;
}
 
