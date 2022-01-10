#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll n, sum = 0, minOdd = 1000000000;
vector<ll> a;
 
void init() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if (a[i] % 2 != 0 && a[i] < minOdd) {
            minOdd = a[i];
        }
    }
}
 
void process() {
    if (sum % 2 != 0) cout << sum;
    else {
        if (minOdd == 1000000000) cout << 0;
        else {
            cout << sum - minOdd;
        }
    }
}
 
int main() {
    init();
    process();
} 
