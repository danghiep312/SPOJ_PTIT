#include <bits/stdc++.h>
using namespace std;
 
bool check(int n){
    int count = 0;
    for (int i = 2; i*i <= n; i++) {
        int mu = 0;
        if (n % i == 0) {
            count++;
            while (n % i == 0) {
                mu++;
                n /= i;
                if (mu > 1) return false;
            }
        }
        if (count > 3) return false;
    }
    if (n > 1) {
        count++;
    }
    if (count != 3) return false;
    return true;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (check(n)) cout << "1";
        else {
            cout << "0";
        }
        cout << endl;
    }
} 
