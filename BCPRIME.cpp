#include <bits/stdc++.h>
 
using namespace std;
 
int isPrime (int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}
 
int main() {
    int n;
    cin >> n;
    if (isPrime(n) == 1) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
} 
