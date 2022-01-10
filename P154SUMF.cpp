#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, x, y;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
        if (y - x >= 2) count++;
    }
    cout << count;
} 
