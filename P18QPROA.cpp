#include <bits/stdc++.h>
using namespace std;
 
int t;
int result(int n) {
    int count = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (i % 2 == 0) count++;
            if (n/i % 2 == 0) count++;
        }
    }
    int x = sqrt(n);
    if (x * x == n) {
        if (x % 2 == 0) {
            count--;
        }
    }
    return count;
}
 
int main() {
    int n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << result(n) << endl;
    }
} 
