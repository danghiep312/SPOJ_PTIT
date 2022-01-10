#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long MOD = 1e9 + 7;
ll sqr(ll x)
{ // n^m % k
    return x * x;
}
ll mu(ll n, ll m, ll k)
{
    if (m == 0)
        return 1 % k;
    else if (m % 2 == 0)
        return sqr(mu(n, m / 2, k)) % k;
    else
        return n * (sqr(mu(n, m / 2, k)) % k) % k;
}
ll nhan(ll n, ll m, ll k) {     // n*m % k
    if (m == 0) return 0;
    if (m % 2 == 0) return nhan(n*2 % k, m/2, k) %k;
    else {
        return (nhan(n % k, m - 1, k) % k + n % k) % k;
    }
}
 
void process()
{
    ll n, x;
    ll res = 0;
    cin >> n >> x;
    ll cs;
    for (int i = n - 1; i >= 0; i--)
    {
        cin >> cs;
        ll tmp = mu(x, i, MOD);
        res += nhan(cs, tmp, MOD);
    }
    res %= MOD;
    cout << res;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--) {
        process();
        cout << endl;
    }
} 
