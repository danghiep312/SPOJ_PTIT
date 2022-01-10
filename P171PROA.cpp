#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
ll l, r, x;
void init() {
    cin >> l >> r >> x;
}
 
void process() {
    ll la = log(r)/log(x);
    ll res = 1, check = 0;
    int i = 0;
    do {
        if (res >= l && res <= r) {
            cout << res << " ";
            check = 1;
        }
        res *= x;
        i++;
    }
    while (i <= la);
    if (check == 0) cout << -1;
}
 
int main() {
    init();
    process();
} 
