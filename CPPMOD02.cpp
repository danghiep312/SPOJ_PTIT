#include <bits/stdc++.h>
using namespace std;
 
int t, a, m;
 
int result() {
    int res = -1;
    for (int i = 1; i < m; i++) {
        if ((i * a) % m == 1) {
            res = i;
            break;
        }
    }
    return res;
}
 
int main() {
    cin >> t;
    while (t--) {
        cin >> a >> m;
        cout << result() << endl;
    }
} 
