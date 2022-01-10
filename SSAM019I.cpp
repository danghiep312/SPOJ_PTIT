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
typedef pair<int, int> ii;
const ll MOD = 1e15 + 7;
const long long o = 2 * 1e5 + 1;
const long long nmax = 1e6;
 
struct matrix
{
    ll a[4][4] = {};
};
 
ll n = 3;
 
ll nhan(ll x, ll y)
{
    if (y == 1)
        return x % MOD;
    if (y == 0)
        return 0;
    ll tmp = nhan(x, y / 2) % MOD;
    if (y % 2 == 0)
        return (2 * tmp) % MOD;
    return ((2 * tmp) % MOD + x % MOD) % MOD;
}
 
matrix mulMatrix(matrix A, matrix B)
{
    matrix tmp;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            ll sum = 0;
            for (int k = 1; k <= n; k++)
            {
                sum = (sum % MOD + nhan(A.a[i][k], B.a[k][j]) % MOD) % MOD;
            }
            tmp.a[i][j] = sum;
        }
    }
    return tmp;
}
 
matrix powMatrix(matrix A, ll k)
{
    if (k == 1)
    {
        return A;
    }
    matrix tmp = powMatrix(A, k / 2);
    matrix c = mulMatrix(tmp, tmp);
    if (k % 2 == 0)
        return c;
    return mulMatrix(c, A);
}
 
matrix createI()
{
    matrix res;
    for (int i = 1; i <= n; i++)
    {
        res.a[i][i] = 1;
    }
    return res;
}
 
matrix sumMatrix(matrix A, matrix B)
{
    matrix c;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            c.a[i][j] = (A.a[i][j] + B.a[i][j]) % MOD;
        }
    }
    return c;
}
 
matrix sumPowMatrix(matrix A, ll k)
{
    if (k == 1)
        return A;
    ll h = k / 2;
    matrix c = mulMatrix(sumMatrix(createI(), powMatrix(A, h)), sumPowMatrix(A, h));
    if (k % 2 == 1)
    {
        c = sumMatrix(c, powMatrix(A, k));
    }
    return c;
}
 
void solve()
{
    ll k;
    matrix A;
    cin >> k;
    if (k <= 3)
    {
        cout << k * (k + 1) / 2;
        return;
    }
 
    A.a[1][1] = 1;
    A.a[1][2] = 1;
    A.a[1][3] = 1;
    A.a[2][1] = 1;
    A.a[2][2] = 0;
    A.a[2][3] = 0;
    A.a[3][1] = 0;
    A.a[3][2] = 1;
    A.a[3][3] = 0;
    matrix B = sumPowMatrix(A, k - 3);
 
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << B.a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
 
    ll res = 6;
    for (int i = 1; i <= n; i++)
    {
        res += nhan(B.a[1][i], (4 - i));
        res %= MOD;
    }
    cout << res;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
} 
