#include <bits/stdc++.h>
using namespace std;
 
int a[100000], n;
 
void xuat() {
    for (int i = 0; i < n; i++) {
        cout << a[i];
    }
}
 
void sinh(int i) {
    if (i >= n) {
        xuat();
        cout << " ";
    }
    else {
        for (int j = 0; j < 2; j++) {
            a[i] = j;
            sinh(i + 1);
        }
    }
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n;
        sinh(0);
        cout << endl;
    }
} 
