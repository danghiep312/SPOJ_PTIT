#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int sum = 0;
    int n;
    cin >> n;
    int tmp;
    int minOdd = 1000000;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp % 2 != 0) {
            minOdd = tmp < minOdd ? tmp : minOdd;
        }
        sum += tmp;
    }
    if (sum % 2 != 0) {
        cout << sum;
    }
    else {
        cout << sum - minOdd;
    }
} 
