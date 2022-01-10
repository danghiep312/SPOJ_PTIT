#include <bits/stdc++.h>
 
using namespace std;
 
int doi_xung (int n) {
    int tmp = n;
    int sum = 0;
    while (n > 0) {
        sum = sum*10 + n%10;
        n /= 10;
    }
    if (sum == tmp) return 1;
    else return 0;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (doi_xung(n)) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << endl;
    }
} 
