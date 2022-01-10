#include <bits/stdc++.h>
using namespace std;
 
int m, s;
void init()
{
    cin >> m >> s;
}
 
void process()
{
    if (9*m < s || s == 0) {
        cout << "-1 -1";
        return;
    }
    string a;
    for (int i = 0; i < m; i++)
    {
        if (s >= 9)
        {
            a += '9';
            s -= 9;
        }
        else
        {
            a += (s + 48);
            s = 0;
        }
    }
    string aRev;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        aRev += a[i];
    }
    int i = 0;
    if (aRev[0] == '0')
    {
        while (aRev[i] == '0')
        {
            i++;
        }
        //cout << i << " ";
        aRev[i]--;
        aRev[0] = '1';
    }
    //cout << aRev << " " << a;
    // if (a == aRev) {
    //     cout << "-1 -1";
    //     return;
    // }
    cout << aRev << " " << a;
}
 
int main()
{
    init();
    process();
} 
