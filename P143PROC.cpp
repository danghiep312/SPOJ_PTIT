#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
ll y, k, n;
void init()
{
    cin >> y >> k >> n;
}
 
void process()
{
    int t = (y / k + 1) * k;
    if (t > n)
    {
        cout << -1;
    }
    else
    {
        do
        {
            cout << t - y << " ";
            t += k;
        } while (t <= n);
    }
}
 
int main()
{
    init();
    process();
} 
