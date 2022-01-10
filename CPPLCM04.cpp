#include <bits/stdc++.h>
using namespace std;
 
long long LCM(long long a, long long b) {
    long long tmp1 = a;
    long long tmp2 = b;
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
 
long long mod(string a, long long b) {
    long long c = 0, k;
    for (long long i = 0; i < a.size(); i++) {
        k = c*10 + a[i] - 48;
        c = k % b;
    }
    return c;
}
 
long long convert(string a) {
    long long sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum = sum*10 + (a[i] - 48);
    }
    return sum;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        string a;
        long long b;
        cin >> b >> a;
        cout << LCM(mod(a, b), b) << endl;
    }
} 
