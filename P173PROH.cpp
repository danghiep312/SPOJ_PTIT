#include <bits/stdc++.h>
using namespace std;
 
int result(int n) {
    if (n % 2 != 0) return 0;
    int count2 = 0;
    while (n % 2 == 0) {
        count2++;
        n /= 2;
    }
    int res = count2;
    for (int i = 3; i <= sqrt(n); i++) {
        int countNum = 0;
        while (n % i == 0) {
            countNum++;
            n /= i;
        }
        res *= (countNum + 1);
    }
    if (n > 1) {
        res *= 2;
    }
    return res;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << result(n) << endl;
    }
} 
