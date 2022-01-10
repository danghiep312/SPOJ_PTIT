#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    sort (a, a + 3);
    int tmp1 = a[1] - a[0];
    int tmp2 = a[2] - a[1];
 
    if (tmp1 == 2*tmp2) {
        cout << a[0] + tmp2;
    }
    else if (tmp2 == 2*tmp1) {
        cout << a[1] + tmp1;
    }
    else if (tmp1 == tmp2) {
        if (a[2] + tmp1 >= 1000) {
            cout << a[0] - tmp1;
        }
        else {
            cout << a[2] + tmp1;
        }
    }
} 
