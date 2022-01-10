#include <bits/stdc++.h>
using namespace std;
 
bool check(string s)
{
    int n = s.size() + 1, up = 0, t;
    for (int i = n - 2; i >= 0; i--)
    {
        t = s[i] - '0';
        if ((t * n + up) % 10 != 9) return false;
        up = (t * n + up) / 10;
    }
    return true;;
}
main()
{
    string s;
    while (cin >> s) {
        if (check(s)) cout << s << " is cyclic" << endl;
        else cout << s << " is not cyclic" << endl;
    }
} 
