#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int b[10000];
    int a[10000] = {0};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        a[b[i]]++;
    }
    int tick = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 0) {
            cout << i;
            tick = 1;
            break;
        }
    }
    if (tick == 0) cout << n + 1;
} 
