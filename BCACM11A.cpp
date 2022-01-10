#include <bits/stdc++.h>
using namespace std;
 
bool check(int n, int m, int k) {
    if (n <= 145 && m <= (180 - n) && k <= (900 - m - n)) return true;
    return false;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int m,n,k;
        cin >> n >> m >> k;
        if (check(n,m,k)) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
} 
