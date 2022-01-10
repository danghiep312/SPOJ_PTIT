#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll m, k;
 
void init()
{
    cin >> m >> k;
}
 
void process()
{
    ll res = 0, i = 1;
    while (m >= i * k)
    {
        res += k;
        m -= i * k;
        i++;
    }
    res += m / i;
    cout << res;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        process();
        cout << endl;
    }
} 
