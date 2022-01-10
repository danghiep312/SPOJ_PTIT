#include <bits/stdc++.h>
using namespace std;
 
typedef long long  ll;
 
int main() {
    
        ll n;
        cin >> n;
        int res = 1;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                int count = 0;
                while (n % i == 0) {
                    count++;
                    n /= i;
                }
                res *= 2*count + 1;
            }
        }
        if (n > 1) res *= 3;
        cout << res;
    
} 
