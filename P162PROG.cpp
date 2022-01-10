#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int k;
    cin >> k;
    int res = 1;
    while (k != 1) {
        if (k % 2 == 0) {
            k /= 2;
        }
        else {
            k--;
            res++;
        }
    }
    cout << res;
} 
