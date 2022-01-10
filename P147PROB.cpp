#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    vector<int> a;
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(i != 0) {
            a[i] += a[i - 1];
        }
    }
    cout.precision(12);
    cout << (double) a[n - 1]/n;
} 
