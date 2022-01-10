#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int min = 100;
        int max = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int k;
            cin >> k;
            max = k > max ? k : max;
            min = k < min ? k : min;
        }
        cout << (max - min)*2 << endl;
    }
} 
