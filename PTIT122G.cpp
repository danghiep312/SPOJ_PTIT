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
bool stop = true;
bool check(string a)
{
    int n = a.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (a[i] != a[n - 1 - i])
            return false;
    }
    return true;
}
 
string subString(string a, string b)
{
    if (a == b)
    {
        return "0";
    }
    string res;
    while (a.size() < b.size())
        a = '0' + a;
    while (a.size() > b.size())
        b = '0' + b;
    if (a < b)
    {
        swap(a, b);
    }
    int tmp = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int num = a[i] - 48 - (b[i] - 48) - tmp;
        if (num < 0)
        {
            res = (char)(num + 10 + 48) + res;
            tmp = 1;
        }
        else
        {
            res = (char)(num + 48) + res;
            tmp = 0;
        }
    }
    while (res[0] == '0')
    {
        res.erase(0, 1);
    }
    return res;
}
 
void solve()
{
    string a, b;
    cin >> a;
    if (a == "0") {
        stop = false;
        return;
    }
    b = a;
    int n = a.size();
    while (!check(b))
    {
        for (int i = 0; i < n / 2; i++)
        {
            if (b[i] > b[n - 1 - i])
            {
                b[n - 1 - i] = b[i];
            }
            else if (b[i] < b[n - 1 - i])
            {
                b[n - 1 - i] = b[i];
                int k = n - 2 - i;
                do
                {
                    if (b[k] == '9')
                        b[k] = '0';
                    else
                        b[k]++;
                    k--;
                } while (b[k + 1] == '0');
            }
        }
    }
    cout << subString(a, b) << endl;
}
 
int main()
{
    while (stop) solve();
} 
