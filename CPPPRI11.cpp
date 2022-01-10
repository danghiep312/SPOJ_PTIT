#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void process() {
    ll n;
    cin >> n;
    if (n > ll(1e12)) {
        cout << "0" << endl;
        return;
    }
    ll sum = 1;
    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) {
            sum += i;
            sum += n/i;
        }
    }
    int k = sqrt(n);
    if (k * k == n) {
        sum += k;
    }
    if (sum == n) {
        cout << "1" << endl;
        return;
    }
    else {
        cout << "0" << endl;
        return;
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        process();
    }
} 
