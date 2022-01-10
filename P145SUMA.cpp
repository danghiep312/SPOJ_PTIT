#include <bits/stdc++.h>
using namespace std;
 
int n;
string a;
bool luckyNum (string a) {
    int sumLeft = 0, sumRight = 0;
    for (int i = 0; i < n/2; i++) {
        if (a[i] != '4' && a[i] != '7') {
            return false;
        }
        sumLeft += (a[i] - 48);
    }
    for (int i = n/2; i < n; i++) {
        if (a[i] != '4' && a[i] != '7') {
            return false;
        }
        sumRight += (a[i] - 48);
    }
    if (sumRight == sumLeft) return true;
    return false;
}
 
int main() {
    cin >> n;
    cin >> a;
    if (luckyNum(a)) cout << "YES";
    else cout << "NO";
}
 
 
