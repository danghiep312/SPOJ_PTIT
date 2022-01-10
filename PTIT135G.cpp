#include <bits/stdc++.h>
using namespace std;
 
int c, n;
vector<int> a;
int MAX = 0;
 
void nhap() {
    cin >> n >> c;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
 
void Try () {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                if (a[i] + a[j] + a[k] <= c && a[i] + a[j] + a[k] > MAX) {
                    MAX = a[i] + a[j] + a[k];
                }
            }
        }
    }
}
 
int main() {
    nhap();
    Try();
    cout << MAX;
} 
