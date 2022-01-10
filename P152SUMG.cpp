#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int x) {
    if (x < 2) return 0;
    for (int i = 2; i*i <= x; i++) {
        if (x % i == 0) return 0;
    }
    return 1;
}
 
bool check(int x,int y) {
    for (int i = x + 1; i <= y; i++) {
        if (isPrime(i)) {
            if (i == y) return 1;
            return 0;
        }
    }
    return 0;
}
 
int main() {
    int tmp, x, y;
    cin >> x >> y;
    if (check(x,y)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
} 
