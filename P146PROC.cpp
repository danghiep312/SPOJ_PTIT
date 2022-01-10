#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a[4];
    int count = 1;
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }
    sort(a, a + 4);
    for (int i = 0; i < 3; i++) {
        if (a[i] != a[i + 1]) {
            count++;
        }
    } 
    cout << 4 - count;
} 
