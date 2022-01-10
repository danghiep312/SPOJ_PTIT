#include <bits/stdc++.h>
using namespace std;
 
vector<int> a(1e6, 0);
 
void snt() {
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i <= 1e4; i++) {
        if (a[i] == 0) {
            for (int j = i; j <= 1e4; j += i) {
                if (a[j] == 0) {
                    a[j] = i;
                }
            }
        }
    }
}
 
void run(int n) {
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
}
 
int main() {
    snt();
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        run(n);
        cout << endl;
    }
} 
