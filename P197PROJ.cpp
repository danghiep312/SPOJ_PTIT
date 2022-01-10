#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll n, k;
vector<ll> a, b;
vector<int> c(1e5 + 5, 0);
vector<int> d(1e5 + 5, 0);
int countt = 0;
 
void init() {
    cin >> n >> k;
    a.resize(n);
    b.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    sort(b.begin(), b.end());
}
 
void process() {    
    int x, y;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j] && c[i] == 0) {
                countt++;
                c[j] = 1;
                d[i] = 1;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (c[i] == 0) {
            y = i;
            break;
        }
    }
    for (int i = 0; i < n; i++) {
        if (d[i] == 0) {
            x = i;
            break;
        }
    }
    int dif = n - countt;
    if (dif > 1) cout << "NO";
    else {
        if (dif == 1) {
            if ((b[x] - a[y]) <= k && (b[x] - a[y]) >= -k) cout << "YES";
            else cout << "NO";
        }
        else cout << "YES";
    }
}
 
int main() {
    init();
    process();
} 
