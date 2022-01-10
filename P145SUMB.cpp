#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
    int count1 = 0, count0 = 0;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 1) count1++;
        else count0++;
    }
    int l, r;
    
    for (int i = 0; i < m; i++) {
        cin >> l >> r;
        if ((r - l + 1) % 2 == 0) {
            if (count1 >= (r - l + 1)/2 && count0 >= (r - l + 1)/2) cout << "1" << endl;
            else cout << "0" << endl;
        }
        else cout << "0" << endl;
    }
} 
