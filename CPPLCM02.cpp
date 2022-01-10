#include<bits/stdc++.h>
using namespace std;
vector<long long> x;
int n;
 
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
    return (tmp1/a) * tmp2;
}
 
void init() {
    cin >> n;
    x.resize(n);
    for (int i = 0; i < n; i++) {
        x[i] = i + 1;
    }
}
 
void process() {
    for (int i = 1; i < n; i++) {
        x[i] = LCM(x[i], x[i - 1]);
    }
    cout << x[n - 1] << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
        process();
    }
} 
