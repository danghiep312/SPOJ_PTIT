#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
typedef double db;
 
#define FOR(a, b) for (ll i = a; i < b; i++)
#define FORR(i, a, b) for (ll i = a; i < b; i++)
const ll mod = 1e9 + 7;
main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    ll a[n];
    FOR(0, n)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    ll b[3];
    b[0] = a[0];
    b[1] = a[1];
    b[2] = a[2];
    ll count1 = 0, count2 = 0, count3 = 0;
    FOR(0, n)
    {
        if (a[i] == b[0])
            count1++;
        if (a[i] == b[1])
            count2++;
        if (a[i] == b[2])
            count3++;
    }
    if (b[0] == b[1] && b[1] == b[2])
    {
        cout << count1 * (count1 - 1) * (count1 - 2) / 6;
        return 0;
    }
    if (b[0] != b[1] && b[1] != b[2] && b[2] != b[0])
    {
        cout << count3;
        return 0;
        // 1 2 3 3
    }
 
    if (b[0] == b[1] && b[1] != b[2])
    {
        // 1 1 2 2
        cout << count3;
        return 0;
    }
    if (b[0] != b[1] && b[1] == b[2])
    {
        // 1 2 2 2 3 4 5
        cout << count2 * (count2 - 1) / 2;
    }
    // n*(n-1)/2
    // n*(n-1)*(n-2)/6
}
 
//Dang hiep + Duc anh bai nay bon em cung lam nen giong nhau a 
 
