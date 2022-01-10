#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
ll c, k;
 
ll pow10(ll k) {
    ll res = 1;
    for (int i = 0; i < k; i++) {
        res *= 10;
    }
    return res;
}
 
void init() {
    cin >> c >> k;
}
 
void process() {
    ll tmp = c;
    ll sum = 0;
    for (int i = 0; i < k; i++) {
        sum += pow10(i)*(c % 10);
        c /= 10;
    }
 
    if (sum < 5*pow10(k - 1)) {
        cout << tmp - sum;
    }
    else {
        cout << tmp + pow10(k) - sum;
    }
}
 
int main() {
    init();
    process();
} 
