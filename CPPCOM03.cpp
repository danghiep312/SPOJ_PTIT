#include <bits/stdc++.h>
using namespace std;
 
int a[21];
int b[21] = {0};
int n;
 
void xuat() {
    for (int i = 1; i <= n; i++) {
        cout << a[i];
    }
}
 
void sinh(int k) {
    for (int i = 1; i <= n; i++) {
        if (b[i] == 0) {
            a[k] = i;
            b[i] = 1;
            if (k == n) {
                xuat();
                cout << " ";
            }
            else {
            sinh(k + 1);
            }
            b[i] = 0;
        }
    }
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        sinh(1);
        cout << endl;
    }
} 
