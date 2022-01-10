#include <bits/stdc++.h>
using namespace std;
 
vector<int> a;
vector<int> b;
int n;
 
int main() {
    cin >> n;
    a.resize(n + 1);
    b.resize(n + 1);
    a[0] = 0;
    b[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
 
    for (int i = 1; i <= n; i++) {
        b[i] = 1;
        for (int j = i - 1; j >= 0; j--) {
            if (a[i] > a[j]) {
                b[i] = max(b[i], b[j] + 1);
            }
        }
    }
    int cmax = 0;
    for (int i = 1; i <= n; i++) {
        cmax = b[i] > cmax ? b[i] : cmax;
    }
    cout << cmax;
} 
