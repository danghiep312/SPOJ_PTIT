#include <bits/stdc++.h>
using namespace std;
 
long long GCD(long long a, long long b) {
    while (b > 0) {
        if (a > b) {
            long long tmp = a;
            a = b;
            b = tmp;
        }
        b %= a;
    }
    return a;
}
 
long long sqr(long long x) {
    return x * x;
}
 
long long mu(long long a, long long b, long long k) {
    if (b == 0) return 1;
    if (b % 2 == 0) {
        return sqr(mu(a, b/2, k))%k;
    }
    else {
        return a * (sqr(mu(a, b/2, k)) % k) % k;
    }
}
 
int t;
vector<long long> c;
 
void process() {
    int n;
    long long mul = 1;
    cin >> n;
    c.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> c[i];
        mul *= c[i];
        mul %= 1000000007;
    }
    for (int i = 1; i < n; i++) {
        c[i] = GCD(c[i], c[i - 1]);
    }
    long long tmp = c[n - 1];
    cout << mu(mul, tmp, 1000000007) << endl;
}
 
int main() {
    cin >> t;
    while (t--) {
        process();
    }
} 
