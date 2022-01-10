#include <bits/stdc++.h>
using namespace std;
 
long long range(long long a, long long b, long long c, long long d) {
    return sqrt((a - c)*(a - c) + (b - d)*(b - d));
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b * d > 0) {
            d = -d;
        }
        cout << range(a,b,c,d) << endl; 
    }
} 
