#include <bits/stdc++.h>
using namespace std;
 
int rice(int n) {
    if (n == 1 || n == 2 || n == 4 || n == 7) {
        return -1;
    }
    else {
        int bich5 = n / 5;
        n %= 5;
        if (n == 0) {
            return bich5;
        }
        else if (n == 1) {
            return bich5 + 1;
        }
        else if (n == 2) {
            return bich5 + 2;
        }
        else if (n == 3) {
            return bich5 + 1;
        }
        else {
            return bich5 + 2;
        }
    }
}
 
int main() {
    int n;
    cin >> n;
    cout << rice(n);
} 
