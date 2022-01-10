#include <bits/stdc++.h>
using namespace std;
int isPrime (int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int count = 0, n, sum;
        cin >> n;
        if (isPrime(n)) {
            count++;
        }
        for (int i = 2; i <= n/2; i++) {
            sum = 0;
            if (isPrime(i)) {
                for (int j = i; j <= n; j++) {
                    if (isPrime(j)) {
                        sum += j;
                        if (sum == n){
                            count ++;
                        }
                        if (sum > n) {
                            break;
                        }
                    }
                }
            }
        }
        cout << count << endl;
    }
} 
