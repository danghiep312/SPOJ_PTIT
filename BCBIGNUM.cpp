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
    bool check = false;
    if (a < b)
    {
        swap(a, b);
        check = true;
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
    if (check)
    {
        res = '-' + res;
    }
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
 
int main()
{
    string a, b;
    cin >> a >> b;
    cout << sumString(a, b) << endl << subString(a, b) << endl;
    cout << mulString(a, b);
} 
