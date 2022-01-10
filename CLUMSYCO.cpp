#include <bits/stdc++.h>
using namespace std;
string s;
void process()
{
    cin >> s;
    long long d = 0, res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            if (d < 0)
            {
                d = -d;
                res += d / 2;
                if (d % 2 != 0)
                {
                    d = 2;
                    res++;
                }
                else
                    d = 1;
            }
            else
                d++;
        }
        else
        {
            d--;
        }
    }
    if (d < 0)
        d = -d;
    if (d % 2)
        d++;
    res += d / 2;
    cout << res;
}
 
int main() {
    process(); 
} 
