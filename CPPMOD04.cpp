#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int result(ll n, ll k) {
    if (n < k) {
        ll sum = n*(n + 1) / 2;
        if (sum == k) return 1;
        return 0;
    }
    return 0;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        cout << result(n, k) << endl;
    }
} 
