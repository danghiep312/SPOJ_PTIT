#include <bits/stdc++.h>
using namespace std;
 
struct Ra {
    long long x, y;
    long long value;
};
 
vector<Ra> a;
long long n, res = 0, k;
 
void init() {
    cin >> n >> k;
    a.resize(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i].x >> a[i].y;
        a[i].value = a[i].y - a[i].x + 1;
        res += a[i].value;
    }
}
 
void process() {
    long long sum = (k - res % k) % k;
    cout << sum;
}
 
int main() {
    init();
    process();
} 
