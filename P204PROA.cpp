#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
ll n, a, b, c;
 
void process()
{
    cin >> n >> a >> b >> c;
    if (b - c >= a)
    {
        cout << n / a;
    }
    else
    {
        ll count = 0;
        while (n >= b)
        {
            ll tmp = n / b;
            count += tmp;
            n = n - tmp * b + tmp * c;
        }
        //cout << n << " ";
        if (n >= a)
        {
            count += n / a;
        }
        cout << count;
    }
}
 
int main()
{
    process();
} 
