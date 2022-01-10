#include <bits/stdc++.h>
using namespace std;
 
int c, n;
vector<int> a;
int MAX = 0;
 
void nhap() {
    cin >> c >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
 
void Try (int i, int d, int sum) {
    if (d > n || sum > c) return;
    if (i == n) {
        MAX = sum > MAX ? sum : MAX;
        return;
    }
    Try(i + 1, d, sum);
    Try(i + 1, d + 1, sum + a[i]);
}
 
int main() {
    nhap();
    Try(0,0,0);
    cout << MAX;
} 
