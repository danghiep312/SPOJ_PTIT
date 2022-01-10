#include <bits/stdc++.h>
using namespace std;
 
string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ_.ABCDEFGHIJKLMNOPQRSTUVWXYZ_.";
 
int n;
string a;
stack<char> s;
 
void init()
{
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        int tmp;
        if (a[i] <= 'Z' && a[i] >= 'A')
            tmp = a[i] - 65;
        else if (a[i] == '_')
            tmp = 26;
        else
            tmp = 27;
        s.push(alpha[tmp + n]);
    }
}
 
void process()
{
 
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}
 
int main()
{
    while (1)
    {
        cin >> n;
        if (n == 0)
            return 0;
        init();
        process();
        cout << endl;
    }
} 
