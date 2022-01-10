#include <bits/stdc++.h>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define endl '\n'
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
using namespace std;
typedef double db;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const ll MOD = 1e9 + 7;
const long long o = 2 * 1e5 + 1;
char res = -1;
char a[35][35];
int n;
void init()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
 
    for (int i = 0; i <= n + 1; i++)
    {
        a[0][i] = '.';
        a[i][0] = '.';
        a[n + 1][i] = '.';
        a[i][n + 1] = '.';
    }
}
 
void process()
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] != '.')
            {
                char tmp = a[i][j];
                if (a[i - 1][j - 1] == tmp && a[i + 1][j + 1] == tmp)
                {
                    res = tmp;
                }
                if (a[i - 1][j + 1] == tmp && a[i + 1][j - 1] == tmp)
                {
                    res = tmp;
                }
                if (a[i + 1][j] == tmp && a[i - 1][j] == tmp)
                {
                    res = tmp;
                }
                if (a[i][j - 1] == tmp && a[i][j + 1] == tmp)
                {
                    res = tmp;
                }
            }
        }
    }
}
 
int main()
{
    init();
    process();
    if (res == -1 || res == '.')
        cout << "ongoing";
    else
        cout << res;
} 
