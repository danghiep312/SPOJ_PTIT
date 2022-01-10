#include <bits/stdc++.h>
using namespace std;
 
int t;
int tmp, n, m;
void init()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> tmp;
    for (int i = 0; i < m; i++)
        cin >> tmp;
}
 
void process()
{
    if (n > m)
        cout << "No";
    else
        cout << "Yes";
}
 
int main()
{
    cin >> t;
    while (t--)
    {
        init();
        process();
        cout << endl;
    }
} 
