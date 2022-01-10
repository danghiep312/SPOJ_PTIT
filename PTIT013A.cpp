#include <bits/stdc++.h>
using namespace std;
 
int n, t;
 
int check (int a) {
    int t = 2, tmp = 0;
    while (t--) {
        tmp = tmp * 10 + (a % 10);
        a /= 10;
    }
    if (tmp == 68) return 1;
    return 0;
}
 
int main() {
    cin >> t;
    while (t--) {
        cin >> n;
        cout << check(n) << endl;
    }
} 
