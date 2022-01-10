#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a[3];
        for (int i = 0; i < 3; i++) {
            cin >> a[i];
        }
        long long min = a[0];
        long long max = a[0];
        for (int i = 1; i < 3; i++) {
            min = a[i] < min ? a[i] : min;
            max = a[i] > max ? a[i] : max; 
        }
        cout << max - min << endl;
    }
} 
