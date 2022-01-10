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
 
int BS(ll a[], int l, int r, ll x)
{
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (a[mid] == x)
            return x;
        else if (a[mid] > x)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
 
void init(ll a[], ll n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] *= a[i];
    }
}
 
bool check(ll n)
{
    ll tmp = sqrt(n);
    if (tmp * tmp == n)
        return true;
    return false;
}
 
void solve()
{
    ll a[5005], n;
    cin >> n;
    init(a, n);
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (check(a[i] + a[j]))
            {
                if (BS(a, 0, n - 1, a[i] + a[j]) != -1)
                {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
}
 
int main()
{
    faster();
    int a[5000];
    int t;
    cin >> t;
    while (t--)
        solve();
} 
