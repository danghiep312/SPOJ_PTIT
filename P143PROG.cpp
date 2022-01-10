#include <bits/stdc++.h>
using namespace std;
 
int n, k;
void process() {
    cin >> n >> k;
    if (k % (n - 1) == 0) {
        int th1 = (k/(n - 1))*n;
        int th2 = (k/(n - 1)) + k - 1;
        if (th1 < th2) cout << th1 << " " << th2;
        else cout << th2 << " " << th1;
    }
    else {
        int Teo = k/(n - 1);
        cout << Teo + k << " " << Teo + k;
    }
}
 
int main() {
    process();
} 
