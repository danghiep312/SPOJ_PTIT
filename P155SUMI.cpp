#include <bits/stdc++.h>
using namespace std;
 
int n, m;
vector<int> a;
 
void init()
{
    cin >> m >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
 
void process()
{
    int min = 10000;
    sort(a.rbegin(), a.rend());
    for (int i = 0; i < n - m + 1; i++)
    {
        if (a[i] - a[i + m - 1] < min)
            min = a[i] - a[i + m - 1];
    }
    cout << min;
}
 
int main()
{
    init();
    process();
} 
