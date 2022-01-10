#include <bits/stdc++.h>
 
using namespace std;
int t;
// long long convert(string a) {
//     long long sum = 0;
//     for (int i = 0; i < a.size(); i++) {
//         sum = sum*10 + (a[i] - '0');
//     }
//     return sum;
// }
 
long long mod(string a, long long b) {
    long long c = 0, k;
    for (int i = 0; i < a.size(); i++) {
        k = c*10 + a[i] - 48;
        c = k % b;
    }
    return c;
}
 
long long sqr(long long x) {
    return x*x;
}
 
long long pow(long long a, long long b, long long MOD) {
    if (b == 0) return 1 % MOD;
    else
        if (b % 2 == 0)
            return sqr(pow(a, b/2, MOD)) % MOD;
        else
            return a * (sqr(pow(a, b/2, MOD)) % MOD) % MOD;
}
 
void run() {
    cin >> t;
    while (t--) {
        string a;
        long long b, c;
        cin >> a >> b >> c;
        cout << pow(mod(a,c), b, c)  << endl;
    }
}
 
int main() {
    run();
} 
