#include <bits/stdc++.h>
using namespace std;
 
int a[24][60], n, res = 0;
 
int main() {
    int x, y;
    for (int i = 0; i < 23; i++) {
        for (int j = 0; j < 59; j++) {
            a[i][j] = 0;
        }
    }
 
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        a[x][y]++;
        res = max(res, a[x][y]);
    }
    cout << res;
} 
