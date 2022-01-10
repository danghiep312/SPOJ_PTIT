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
 
int n, k, res = 0;
vi a;
 
void init() {
    a.push_back(0);
    cin >> n >> k;
    int tmp;
    for (int i = 1; i <= n; i++) {
        cin >> tmp;
        a.push_back(tmp + a[i - 1]);
        //cout << a[i] << " ";
    }
}
 
void Try(int x, int begin, int end, int gr) {
    if (begin > end) return;
    if (gr == 1) {
        if (x == a[end] - a[begin - 1]) {
            res++;
        }
        return;
    }
    if (gr == 0) return;
    for (int i = begin; i <= n; i++) {
        if (a[i] - a[begin - 1] == x) {
            Try(x, i + 1, end, gr - 1);
        }
    }
}
 
int main() {
    //freopen("test.txt", "r", stdin);
    init();
    if (k == 1) {
        cout << 1;
        return 0;
    }
    for (int i = 1; i <= n; i++) {
        Try(a[i], i + 1, n, k - 1);
    }
    cout << res;
} 
