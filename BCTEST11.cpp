#include <bits/stdc++.h>
using namespace std;
 
bool luckyNum (int n) {
    while (n > 0) {
        if (n % 10 != 4 && n % 10 != 7) return false;
        n /= 10;
    }
    return true;
}
 
bool lucDivNum (int n) {
    if (luckyNum(n)) return true;
    for (int i = 4; i <= n; i++) {
        if (luckyNum(i) && n % i == 0) return true;
    }
    return false;
}
 
int main() {
    int n;
    cin >> n;
    if (lucDivNum(n)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
} 
