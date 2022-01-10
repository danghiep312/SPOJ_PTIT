#include <bits/stdc++.h>
using namespace std;
 
int revNum(int n) {
    int tmp = 0;
    while (n > 0) {
        tmp = 10*tmp + n % 10;
        n /= 10;
    }
    return tmp;
}
 
int main() {
    int a, b;
    cin >> a >> b;
    if (revNum(a) > revNum(b)) {
        cout << revNum(a);
    }
    else {
        cout << revNum(b);
    }
} 
