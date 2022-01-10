#include <bits/stdc++.h>
using namespace std;
 
int n, k;
vector<int> a, b;
int flag;
vector<int> dd(10004);
void init()
{
    cin >> n >> k;
    a.resize(n + 1);
    b.resize(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
}
 
void process()
{
    int count = 0, res, pos;
    while (count < k)
    {
        for (int i = 1; i <= n; i++)
        {
            if (dd[i] == 0)
            {
                res = a[i];
                pos = i;
                break;
            }
        }
        for (int i = 1; i <= n; i++)
        {
            if (a[i] > res && dd[i] == 0)
            {
                res = a[i];
                pos = i;
            }
        }
        dd[pos] = 1;
        count++;
    }
    sort(b.begin() + 1, b.end(), greater<int>());
    cout << b[k] << endl;
    for (int i = 1; i <= n; i++)
    {
        if (dd[i] == 1)
            cout << i << " ";
    }
}
 
int main()
{
    init();
    process();
} 
