#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
const int MOD = 1e9 + 7;
ll nCr[202][202];
 
void init()
{ //to hop chap j cua i;
    for (int i = 0; i < 202; i++)
    {
        nCr[i][0] = nCr[i][i] = 1;
        int k = i / 2;
        for (int j = 1; j < k + 1; j++)
        {
            nCr[i][j] = nCr[i][i - j] = (nCr[i - 1][j] + nCr[i - 1][j - 1]) % MOD;
        }
    }
}
 
void process()
{
    int a, b;
    cin >> a >> b;
    cout << nCr[a + b][a] << endl;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        process();
    }
} 
