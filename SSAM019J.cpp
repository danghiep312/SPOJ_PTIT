#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll n, t;
vector<ll> a;
 
void init() {
    cin >> n;
    a.resize(n + 2);
    for (int i = 1; i < n  + 1; i++) {
        cin >> a[i];
    }
    a[0] = a[1];
    a[n + 1] = a[n];
}
 
void process() {
    for (int i = 0; i < n + 1; i++) {
        cout << a[i]/__gcd(a[i], a[i + 1]) *a[i + 1] << " ";
    }
}
 
int main() {
    cin >> t;
    while(t--) {
        init();
        process();
        cout << endl;
    }
} 
