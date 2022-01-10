#include <bits/stdc++.h>
using namespace std;
 
int n;
vector<int> a;
 
void init() {
    cin >> n;
    a.resize(n);
    int minz = 999999;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        minz = min(minz, a[i]);
    }
    for (int i = 0; i < n; i++) {
        a[i] -= minz;
    }
}
 
void process() {
    int uc = a[0];
    for (int i = 1; i < n; i++) {
        uc = __gcd(a[i], uc);
    }
    int res = 0;
    for (int i = 1; i*i <= uc; i++) {
        if (uc % i == 0) {
            if (i != uc/i) {
                res += 2;
            }
            else res++;
        }
    }
    cout << res << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
        process();
    }
} 
