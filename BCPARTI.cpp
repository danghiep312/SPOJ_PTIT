#include <bits/stdc++.h>
 
using namespace std;
 
int n, t;
 
int main() {
    cin >> t;
    vector<int> a(1001);
    a[1] = 1;
    a[2] = 2;
    for (int i = 1; i <= t; i++) {
        cin >> n;
        for (int j = 3; j <= n; j++) {
            int sum = 1;
            for (int k = 1; k <= j/2; k++) {
                sum += a[k];
            }
            a[j] = sum;
        }
        cout << i << " " << a[n] << endl;
    }    
}
 
