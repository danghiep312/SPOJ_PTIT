#include <bits/stdc++.h>
using namespace std;
 
long long box(long long x, long long y, long long z) {
    long long a = sqrt(x * y * z)/x;
    long long b = sqrt(x * y * z)/y;
    long long c = sqrt(x * y * z)/z;
    return 4*(a + b + c);
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, z;
        cin >> x >> y >> z;
        cout << box (x, y, z) << endl;
    }   
} 
