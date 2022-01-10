#include <bits/stdc++.h>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define endl '\n'
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
using namespace std;
typedef double db;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const ll MOD = 1e9 + 7;
const long long o = 2 * 1e5 + 1;
 
struct dat
{
    int a, b, count;
    dat(int a1, int b1, int count1) {
        a = a1;
        b = b1;
        count = count1;
    }    
};
 
int res;
int x[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int y[8] = {1, 2, 2, 1, -1, -2, -2, -1};
 
void bfs(int x1, int y1, int x2, int y2) {
    queue<dat> q;
    int ct = 0;
    q.push(dat(x1, y1, ct));
    while (!q.empty()) {
        dat u = q.front(); q.pop();
        if (u.a == x2 && u.b == y2) {
            res = u.count;
            return;
        }
        for (int i = 0; i < 8; i++) {
            int eX = u.a + x[i];
            int eY = u.b + y[i];
            int tmp = u.count + 1;
            if (eX >= 1 && eX <= 8 && eY >= 1 && eY <= 8) {
                q.push(dat(eX, eY, tmp));
            }
        }
    }
}
 
void solve() {
    int y1, y2;
    char xx1, xx2;
    cin >> xx1 >> y1 >> xx2 >> y2;
    int x1 = xx1 - 'a' + 1;
    int x2 = xx2 - 'a' + 1;
    bfs(x1, y1, x2, y2);
    cout << res << endl;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
} 
