#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
ll n;
vector<ll> a;
vector<ll> b;
void init()
{
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
}
 
void process()
{
    b.push_back(a[0]);
    for (int i = 1; i < n; i++)
    {
        if (a[i] != a[i - 1])
        {
            b.push_back(a[i]);
        }
    }
    if (b.size() > 3)
        cout << "NO";
    else if (b.size() < 3)
        cout << "YES";
    else
    {
        if (b[2] - b[1] == b[1] - b[0])
            cout << "YES";
        else
            cout << "NO";
    }
    // for (int i = 0 ; i <3; i++) {
    //     cout << b[i] << " ";
    // }
}
 
int main()
{
    init();
    process();
} 
