#include <bits/stdc++.h>
using namespace std;
int count (long long n) {
    int d = 0;
    long long l, r, x, y;
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            x = n/i;
            y = i;
            if ((x + y - 1) % 2 == 0) {
                r = (x + y - 1)/2;
                l = x - r;
                if (l >= 1 && r > 1) {
                    d++;
                }
            }
        }
    }
    return d;
}
 
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << a << ' ' << count(2*b) << endl;
    }
} 
