#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll result(ll n) {
    ll sum = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            sum = sum + i + n/i;
        }
    }
    ll x = sqrt(n);
    if (x * x == n) {
        sum -= x;
    }
    return sum;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        if(result(result(n)) == 2*n) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
} 
