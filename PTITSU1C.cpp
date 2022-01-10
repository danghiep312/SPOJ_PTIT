#include <bits/stdc++.h>
using namespace std;
 
int t, n, m, MAX = 0;
vector<int> a;
 
 
void nhap() {
    cin >> n >> m;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
 
void Try(int i, int d, int sum) {
    if (d > 3 || sum > m || i > n) return;
    if (d == 3) {
        MAX = sum > MAX ? sum : MAX;
    }
    Try(i + 1, d, sum);
    Try(i + 1, d + 1, sum + a[i]);
}
 
int main() {
    cin >> t;
    while(t--) {
        nhap();
        Try(0,0,0);
        cout << MAX << endl;
    }
} 
