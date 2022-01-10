#include <bits/stdc++.h>
using namespace std;
 
vector<int> a(1e6, 0);
int t;
void snt() {
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i*i <= 1e6; i++) {
        if (a[i] == 0) {
            for (int j = i*i; j <= 1e6; j += i) {
                a[j] = 1;
            }
        }
    }
}
 
void run(int n) {
    for (int i = 2; i <= n; i++) {
        if (a[i] == 0 && a[n - i] == 0) {
            cout << i << " " << n - i;
            break;
        }
    }
    cout << endl;
}
 
int main() {
    snt();
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        run(n);
    }
} 
