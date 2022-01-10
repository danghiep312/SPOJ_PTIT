#include<bits/stdc++.h>
using namespace std;
 
int C(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}
 
int main() {
    int n;
    cin >> n;
    if (n == 3) cout << "0";
    else cout << C(4,n);
} 
