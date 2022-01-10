#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, x;
vector<ll> a;
 
void init()
{
    cin >> n >> x;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    a.push_back(0);
}
 
void process()
{
    sort(a.rbegin(), a.rend());
    ll res = a[0], count = 1, min = 100000;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == a[i - 1])
        {
            count++;
        }
        else
        {
            //cout << count << " ";
            if (count < min)
            {
                min = count;
                res = a[i - 1];
            }
            count = 1;
        }
        //cout << a[i] << " ";
    }
 
    cout << n * x - res * min;
}
 
int main()
{
    init();
    process();
} 
