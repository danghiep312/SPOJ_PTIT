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
 
int n, a[11], b[11] = {0};
string s[11];
vi res;
 
void init()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
    }
}
 
int countt(string x, string y)
{
    int count = 0;
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = 0; j < y.size(); j++)
        {
            if (x[i] == y[j])
            {
                count++;
                break;
            }
        }
    }
    return count;
}
 
// void display() {
//     for (int i = 1; i <= n; i++) {
//         cout << a[i];
//     }
//     cout << " ";
// }
void update()
{
    int tmp = 0;
    for (int j = 1; j < n; j++)
    {
        tmp += countt(s[a[j]], s[a[j + 1]]);
    }
    res.push_back(tmp);
}
 
void sinhhv(int k)
{
    for (int i = 1; i <= n; i++)
    {
        if (b[i] == 0)
        {
            a[k] = i;
            b[i] = 1;
            if (k == n)
            {
                update();
            }
            else
            {
                sinhhv(k + 1);
            }
            b[i] = 0;
        }
    }
}
 
int main()
{
    faster();
    init();
    sinhhv(1);
    sort(res.begin(), res.end());
    cout << res[0];
    return 0;
} 
