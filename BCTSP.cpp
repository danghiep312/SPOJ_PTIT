#include <bits/stdc++.h>
 
using namespace std;
 
int n, a[15][15], check[15] = {0}, MIN = 1000000;
 
void nhap() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
}
 
void Try (int sum, int tick, int count) {
    if (count < n - 1 && sum < MIN) {
        for (int i = 1; i < n; i++) {
            if (check[i] == 0) {
                check[i] = 1;
                Try (sum + a[tick][i], i, count + 1);
                check[i] = 0;
            }
        }
    }
    else MIN = min(MIN, sum + a[tick][0]);
}
 
int main() {
    nhap();
    Try(0, 0, 0);
    cout << MIN;
} 
