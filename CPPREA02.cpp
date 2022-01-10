#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
vector<ll> a;
ll n, countt;
 
void init() {
    countt = 0;
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 0) countt++;
        else {
            cout << a[i] << " ";
        }
    }
    for (int i = 0; i < countt; i++) {
        cout << 0 << " ";
    }
    cout << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
    }
} 
