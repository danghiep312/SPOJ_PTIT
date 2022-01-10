#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll t, n, k;
ll result() {
    ll sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (i % k);
    }
    return sum;
}
 
int main() {
    cin >> t;
    while (t--) {
        cin >> n >> k;
        cout << result() << endl;
    }
} 
