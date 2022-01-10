#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long a, b, v;
    cin >> a >> b >> v;
    long long tmp1 = v - b;
    long long tmp2 = a - b;
    if (tmp1 % tmp2 == 0) {
        cout << tmp1/tmp2;
    }
    else {
        cout << tmp1/tmp2 + 1;
    }
} 
