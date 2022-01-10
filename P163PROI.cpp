#include<bits/stdc++.h>
using namespace std;
 
int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    long long d[5];
    d[0] = a+b+c;
    d[1] = 2*a+2*b;
    d[2] = 2*a+2*c;
    d[3] = 2*b+2*c;
    sort (d, d+4);
    cout << d[0];
} 
