#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    int res = 0;
    res += a[2];
    if (a[2] - a[1] <= 1) {
        res += (a[2] - 1);
        a[1] = a[2] - 1;
    }
    else {
        res = 2*a[1] + 1;
    }
    if (a[1] - a[0] <= 1) {
        res += (a[1] - 1);
    }
    else {
        res = 3*a[0] + 3;
    }
    cout << res;
} 
