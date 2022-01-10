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
 
int result(string s)
{
    stack<int> a;
    int res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
            a.push(i);
        else
        {
            if (!a.empty())
            {
                a.pop();
                res += 2;
            }
        }
    }
    return res;
}
 
int main()
{
    string s;
    int t;
    cin >> t;
    while (t--)
    {
        cin >> s;
        cout << result(s) << endl;
    }
} 
