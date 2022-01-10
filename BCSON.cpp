#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> a(m + 2, vector<int> (n + 2));
    for (int i = 0; i <= m + 1; i++) {
        for (int j = 0; j <= n + 1; j++) {
            if (i == 0 || i == m + 1 || j == 0 || j == n + 1) {
                a[i][j] = 0;
            }
            else {
                cin >> a[i][j];
            }
        }
    }
    long long sum = 0;
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] > a[i + 1][j]) {
                sum += abs(a[i][j] - a[i + 1][j]);
            }
            if (a[i][j] > a[i - 1][j]) {
                sum += abs(a[i][j] - a[i - 1][j]);
            }
            if (a[i][j] > a[i][j + 1]) {
                sum += abs(a[i][j] - a[i][j + 1]);
            }
            if (a[i][j] > a[i][j - 1]) {
                sum += abs(a[i][j] - a[i][j - 1]);
            }
        }
    }
    sum += n*m;
    cout << sum;
} 
