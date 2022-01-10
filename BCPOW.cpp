#include <bits/stdc++.h>
using namespace std;
 
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
 
string result(string x, int n, int d)
{
    if (n == 0)
        return "1";
    if (n == 1)
        return x;
    string res = x;
    for (int i = 2; i <= n; i++)
    {
        string tmp = res;
        for (int j = 2; j <= d; j++)
        {
            res = sumString(res, tmp); // 2^3 = (2*2)*2 = (2 + 2) * 2 = (2 + 2) + (2 + 2)
        }
    }
    return res;
}
 
int main()
{
    int n, m;
    cin >> n >> m;
    string lt2 = result("2", n, 2);
    string lt3 = result("3", m, 3);
    string res = sumString(lt2, lt3);
    cout << res[0];
}
 
