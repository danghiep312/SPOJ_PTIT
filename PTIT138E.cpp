#include <bits/stdc++.h>
using namespace std;
 
string a;
 
void process()
{
    cin >> a;
    for (int i = a.size() - 1; i >= 1; i--)
    {
        if (a[i] >= '5')
        {
            if (a[i - 1] != '9')
            {
                a[i - 1]++;
                for (int j = i; j < a.size(); j++)
                {
                    a[j] = '0';
                }
            }
            else
            {
                int k = i - 1;
                while (a[k] == '9')
                {
                    k--;
                }
                if (k == -1)
                {
                    cout << 1;
                    for (int j = 0; j < a.size(); j++)
                        cout << 0;
                    return;
                }
                else
                {
                    a[k]++;
                    for (int j = k + 1; j < a.size(); j++)
                    {
                        a[j] = '0';
                    }
                }
            }
        }
        else
        {
            for (int j = i; j < a.size(); j++)
            {
                a[j] = '0';
            }
        }
    }
    cout << a;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        process();
        cout << endl;
    }
} 
