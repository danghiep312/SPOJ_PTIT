#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ll n, x, y;
    cin >> x >> y >> n;
    vector<int> a;
    a.push_back(0);
    a.push_back(x);
    a.push_back(y);
    for (int i = 3; i <= 6; i++) {
        ll tmp = a[i - 1] - a[i - 2];
        a.push_back(tmp);
    }
    if (n % 6 == 0) {
        cout << a[6];
    }
    else {
        cout << a[n % 6];
    }
} 
