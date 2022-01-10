#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
    bool r = true;
    while (1) {
        if (n == 0 || m == 0) break;
        n--;
        m--;
        if (r) {
            r = false;
        }
        else {
            r = true;
        }
    }
    if (r) cout << "Wilshere";
    else cout << "Xavi";
} 
