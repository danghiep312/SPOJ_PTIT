#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, count = 0;
    cin >> n;
    vector<int> a;
    vector<int> b;
    a.resize(n);
    b.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        b[i] = 0;
    }
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] <= n) {
            b[a[i]]++;
        }
    }
 
    for (int i = 1; i <= n; i++) {
        if (b[i] == 0) {
            count++;
        }
    }
    cout << count;
} 
