#include <bits/stdc++.h>
using namespace std;
 
void chia() {
    double n, h;
    cin >> n >> h;
    double mono = h/(2*n);
    for (int i = 1; i < n; i++) {
        double s = i*mono;
        cout << setprecision(6) << fixed << h*sqrt(s/(n*mono)) << " ";
    }
    cout << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        chia();
    }
} 
