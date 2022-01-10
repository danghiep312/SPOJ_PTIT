#include <bits/stdc++.h>
using namespace std;
 
vector<long long> a, b;
int n;
 
void init() {
    cin >> n;
    a.resize(n);
    b.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
}
 
void process() {
    for (int i = 0; i < a.size(); i++) {
        if (i == 0) {
            b[i] *= a[i + 1];
        }
        else if (i == n - 1) {
            b[i] *= a[n - 2];
        } 
        else {
            b[i] = a[i + 1] * a[i - 1];
        }
        cout << b[i] << " ";
    }
    cout << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
        process();
    }
} 
