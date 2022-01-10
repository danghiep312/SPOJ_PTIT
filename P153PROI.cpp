#include <bits/stdc++.h>
using namespace std;
 
string a;
vector<int> dd(26, 0);
 
void init()
{
    for (int i = 0; i < 26; i++)
    {
        dd[i] = 0;
    }
    getline(cin, a);
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            dd[a[i] - 65]++;
            a[i] += 32;
        }
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            dd[a[i] - 97]++;
        }
    }
}
 
void process()
{
    int value = 0;
    for (int i = 0; i < 26; i++)
    {
        if (dd[i] > 1)
        {
            value += dd[i];
        }
    }
    cout << value << " ";
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == ' ')
        {
            continue;
        }
        if (dd[a[i] - 97] != 0)
        {
            cout << a[i];
            dd[a[i] - 97] = 0;
        }
    }
}
 
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        init();
        process();
        cout << endl;
    }
} 
