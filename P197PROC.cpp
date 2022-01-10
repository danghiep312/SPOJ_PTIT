#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
vector<ll> a;
int n;
 
int check() {
    int d_am = 0, d_duong = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) d_am++;
        else d_duong++;
        if (d_am && d_duong > 0) return 0;
    }
    if (d_am == 0 && d_duong > 0) return 1;
    else return -1;
}
 
void init() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
 
void process() {
    if (check() == -1) {
        ll res = a[0];
        for (int i = 1; i < n; i++) {
            res = max(res, a[i]);
        }
        cout << res;
    }
    else if (check() == 1) {
        ll res = 0;
        for (int i = 0; i < n; i++) {
            res += a[i];
        }
        cout << res;
    }
    else {
        ll res = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
            if (sum < 0) {
                sum = 0;
            }
            else {
                res = max(res, sum);
            }
        }
        cout << res;
    }
}
 
int main() {
    init();
    process();
} 
