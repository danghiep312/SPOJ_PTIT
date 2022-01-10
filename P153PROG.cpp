#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll result(ll n, ll k)
{
    // 1 3 5 7 9 11 2 4 6 8 10
    if (n % 2 == 0)
    {
        if (k <= n / 2)
        {
            return 2 * k - 1;
        }
        else
        {
            k -= n / 2;
            return 2 * k;
        }
    }
    else
    {
        if (k <= n / 2 + 1)
        {
            return 2 * k - 1;
        }
        else
        {
            k -= (n / 2 + 1);
            return 2 * k;
        }
    }
}
 
int main()
{
    ll n, k;
    cin >> n >> k;
    cout << result(n, k);
} 
