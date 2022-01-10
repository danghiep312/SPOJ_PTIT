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
 
string sumString(string a, string b)
{
    string res;
    while (a.size() < b.size())
        a = '0' + a;
    while (a.size() > b.size())
        b = '0' + b;
    int tmp = 0;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int num = a[i] - 48 + b[i] - 48 + tmp;
        res = (char)(num % 10 + 48) + res;
        tmp = num / 10;
    }
    if (tmp == 1)
        res = '1' + res;
    return res;
}
string mulUnit(string a, int t)
{
    int tmp = 0;
    string res;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        int num = (a[i] - 48) * t + tmp;
        res = (char)(num % 10 + 48) + res;
        tmp = num / 10;
    }
    if (tmp > 0)
        res = (char)(tmp + 48) + res;
    return res;
}
string mulString(string a, string b)
{
    if (a.size() < b.size())
        swap(a, b);
    vector<string> s;
 
    for (int i = b.size() - 1; i >= 0; i--)
    {
        int t = b[i] - 48;
        string x = mulUnit(a, t);
        //cout << x << endl;
        for (int j = i + 1; j < b.size(); j++)
        {
            x += '0';
        }
        s.push_back(x);
    }
    string res = "";
    for (int i = 0; i < s.size(); i++)
    {
        res = sumString(res, s[i]);
        //cout << s[i] << endl;
    }
    while (res[0] == '0' && res.size() > 1)
        res.erase(0, 1);
    return res;
}
 
string convert(int n)
{
    string res;
    while (n > 0)
    {
        res = (char) (n % 10 + 48) + res;
        n /= 10;
    }
    return res;
}
 
int result(int n, char x)
{
    int count = 0;
    string res = "1";
    for (int i = 2; i <= n; i++)
    {
        res = mulString(res, convert(i));
    }
    for (int i = 0; i < res.size(); i++)
    {
        if (res[i] == x)
            count++;
    }
    return count;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        char x;
        cin >> n >> x;
        cout << result(n, x) << endl;
    }
    //cout << convert(t);
} 
