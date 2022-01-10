#include <bits/stdc++.h>
using namespace std;
 
int t;
 
double result(double n, double l, double m) {
    return log(m / n)/log(1 + l/100);
}
 
int main() {
    cin >> t;
    while (t--) {
        double n, m, l;
        cin >> n >> l >> m;
        int tmp = result(n, l, m);
        if (result(n, l, m) > tmp) {
            tmp++;
        }
        cout << tmp << endl;
    }
} 
