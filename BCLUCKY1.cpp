#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n;
    cin >> n;
    int count4 = 0, count7 = 0;
    while (n > 0) {
        if (n % 10 == 4) {
            count4++;
        }
        if (n % 10 == 7) {
            count7++;
        }
        n /= 10;
    }
    if (count4 + count7 == 4 || count4 + count7 == 7) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
} 
