#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i*i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}
 
bool check(int n) {
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (isPrime(i)) {
                count++;
            }
            if (n/i != i) {
                if (isPrime(n/i)) {
                    count++;
                }
            }
        }
    }
    if (count != 2) return false;
    return true;
}
 
void process() {
    int n, count = 0;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (check(i)) {
            count++;
            //cout << i << " ";
        }
    }
    cout << count;
}
 
int main() {
    process();
} 
