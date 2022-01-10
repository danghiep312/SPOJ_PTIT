#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
 
int a[100];
int n, s, tmp = 100;
 
void Try(int i, ll sum, int d) {
    if (sum > s || d > tmp) return;
    if (i == n) {
        if (sum == s) tmp = min(tmp, d);
        return;
    }
    Try (i + 1, sum, d);
    Try (i + 1, sum + a[i], d + 1);
}
 
int main() {
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    Try (0, 0, 0);
    cout << tmp;
} 
