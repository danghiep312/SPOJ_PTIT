#include <bits/stdc++.h>
using namespace std;
 
long long a[3];
long long b[3];
 
void init()
{
    cin >> a[0] >> a[1] >> b[0] >> b[1] >> b[2];
    a[2] = sqrt(a[0] * a[0] + a[1] * a[1]);
    sort(a, a + 3);
    sort(b, b + 3);
}
 
void process()
{
    if (b[0] * b[0] + b[1] * b[1] != b[2] * b[2])
    {
        cout << "NO";
        return;
    }
    for (int i = 0; i < 3; i++)
    { 
        if (b[i] > a[i])
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}
 
int main()
{
    init();
    process();
} 
