#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    while (1) {
        cin >> n;
        if (n == 0) return 0;
        if (n < 1000000) cout << n;
        else if (n <= 5000000 && n >= 1000000) cout << n*90/100;
        else cout << n*80/100;
 
        cout << endl;
    }
} 
