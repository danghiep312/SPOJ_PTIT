#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
ll nCr[50][50];
void init()
{
    int k = 1;
    for (int i = 0; i < 50; i++)
    {
        nCr[i][0] = nCr[i][i] = 1;
        k = i / 2;
        for (int j = 1; j <= k; j++)
        {
            nCr[i][j] = nCr[i][i - j] = nCr[i - 1][j] + nCr[i - 1][j - 1];
        }
    }
}
 
void process()
{
    ll n, m, t;
    cin >> n >> m >> t;
    ll res = 0;
    for (int i = 1; i <= m; i++)
    {
        if (t - i >= 4)
        {
            res += (nCr[m][i] * nCr[n][t - i]);
        }
    }
    cout << res;
}
 
int main()
{
    init();
    process();
    //cout << nCr[34][25];
} 
