#include <bits/stdc++.h>
using namespace std;
 
long long a[3], b[3], c[3], d[3];
 
void init()
{
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> b[i];
        b[i] -= a[i];
        //cout << b[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> c[i];
        c[i] -= a[i];
        //cout << c[i];
    }
    for (int i = 0; i < 3; i++)
    {
        cin >> d[i];
    }
}
 
void process()
{
    long long x = b[1] * c[2] - b[2] * c[1];
    long long y = b[2] * c[0] - b[0] * c[2];
    long long z = b[0] * c[1] - b[1] * c[0];
    //cout << x << " " << y << " " << z;
    if (x * (d[0] - a[0]) + y * (d[1] - a[1]) + z * (d[2] - a[2]) == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        process();
        cout << endl;
    }
} 
