#include <bits/stdc++.h>
using namespace std;
 
int isPrime (int n) {
    if (n < 2) return 0;
    for (int i = 2; i < sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
} 
 
int main () {
    int n, i = 2;
    cin >> n;
    for (int i = 2; i <= sqrt(n); i++) {
        int count  = 0;
        while (n % i == 0) {
            count++;
            n /= i;
        }
        if (count != 0) {
            cout << i << " " << count << endl;
        }
    }
    if (isPrime(n)) {
        cout << n << ' ' << 1;
    }
}
 
