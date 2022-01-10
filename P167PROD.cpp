#include <bits/stdc++.h>
using namespace std;
 
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
 
void process() {
    string a, b, c;
    cin >> a >> b >> c;
    int index = -1, tick = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '?') {
            index = i;
            tick = 1;
            break;
        }
    }
    for (int i = 0; i < b.size(); i++) {
        if (index != -1) break;
        if (b[i] == '?') {
            index = i;
            tick = 2;
            break;
        }
    }
    for (int i = 0; i < c.size(); i++) {
        if (index != -1) break;
        if (c[i] == '?') {
            index = i;
            tick = 3;
            break;
        }
    }
    string tmp;
    if (tick == 1) {
        tmp = subString(c, b);
    }
    if (tick == 2) {
        tmp = subString(c, a);
    }
    if (tick == 3) {
        tmp = sumString(a, b);
    }
    cout << tmp[index];
}
 
int main() {
    process();
} 
