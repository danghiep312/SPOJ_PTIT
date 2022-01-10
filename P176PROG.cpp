#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    long long n, x, y, z;
    cin >> n >> x >> y >> z;
    long long tmp = z;
    y = __gcd(z, y);
    if (tmp / y < n)
        cout << tmp / y;
    else
        cout << n;
} 
