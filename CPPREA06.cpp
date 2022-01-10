#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int n, t;
vector<ll> a;
 
void init() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
 
void xuat() {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) count++;
        else cout << a[i] << " ";
    }
    for (int i = 0; i < count; i++) {
        cout << 0 << " ";
    }
    cout << endl;
}
 
void process() {
    for (int i = 0; i < n - 1; i++) {
        if (a[i] != 0 && a[i + 1] == a[i]) {
            a[i] *= 2;
            a[i + 1] = 0;
        }
    }    
    xuat();
}
 
int main() {
    cin >> t;
    while(t--) {
        init();
        process();
    }
} 
