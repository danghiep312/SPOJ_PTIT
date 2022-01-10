#include <bits/stdc++.h>
using namespace std;
 
int result(int n, int k) {
    int count = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        while (n % i == 0) {
            n /= i;
            count++;
            if (count == k) {
                return i;
            }    
        }
    }
    if (n > 1) {
        count++;
    }
    if (count == k) return n;
    return -1;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        cout << result(n, k) << endl;
    }
} 
