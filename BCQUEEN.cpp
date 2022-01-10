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
 
vi a;
int n, res;
 
bool check(int x, int y)
{
    for (int i = 1; i < x; i++)
    {
        if (y == a[i] || abs(y - a[i]) == abs(i - x))
            return false;
    }
    return true;
}
 
void init()
{
    a.clear();
    cin >> n;
    a.resize(n + 1);
    res = 0;
}
 
void Try(int i)
{
    for (int j = 1; j <= n; j++)
    {
        if (check(i, j))
        {
            a[i] = j;
            if (i == n)
                res++;
            Try(i + 1);
        }
    }
}
 
int main() {
    init();
    Try(1);
    cout << res;
} 
