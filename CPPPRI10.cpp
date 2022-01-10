#include <bits/stdc++.h>
using namespace std;
 
long long sumNum(long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
 
void process() {
    long long n;
    cin >> n;
    int countPrime = 0;
    long long sumN = sumNum(n);
    long long sumP = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            countPrime++;
            sumP += sumNum(i);
            n /= i;
        }
    }
 
    if (n != 1) {
        countPrime++;
        sumP += sumNum(n);
    }
    if (sumP == sumN && countPrime != 1) cout << "YES\n";
    else cout << "NO\n";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        process();
    }
} 
