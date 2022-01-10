#include <bits/stdc++.h>
using namespace std;
 
int n, m;
vector<int> a, b;
 
void init()
{
    cin >> n >> m;
    a.resize(n + 1);
    b.resize(m + 1);
    for (int i = 0; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i <= m; i++)
    {
        cin >> b[i];
    }
}
 
void process()
{
    if (n < m)
    {
        cout << "0/1";
    }
    else if (n == m)
    {
        int tmp = __gcd(abs(a[0]), abs(b[0]));
        if (b[0] < 0)
        {
            cout << -a[0] / tmp << "/" << -b[0] / tmp;
        }
        else
        {
            cout << a[0] / tmp << "/" << b[0] / tmp;
        }
    }
    else
    {
        if (b[0] * a[0] < 0)
        {
            cout << "-Infinity";
        }
        else
        {
            cout << "Infinity";
        }
    }
}
 
int main()
{
    init();
    process();
} 
