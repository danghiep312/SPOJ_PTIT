#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
bool isPrime(ll n){ 
    if (n < 2) return false;
    for (int i = 2; i*i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
} 
 
bool cp (ll n) {
    ll x = sqrt(n);
    if (x * x == n) return true;
    return false;
}
 
vector<int> a(1e6, 0);
 
void init() {
    for (int i = 4; i<= 1e6; i++) {
        if (cp(i) && isPrime(sqrt(i))) a[i] = 1;
    }
}
 
void process() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 1) {
            cout << i << " ";
        }
    }
}
 
int main() {
    init();
    int t;
    cin >> t;
    while (t--) {
        process();
        cout << endl;
    }
} 
