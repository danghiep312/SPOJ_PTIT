#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n, m, max, min;
    cin >> n >> m;
    if (m > n) {
        max = m;
        min = n;
    }
    else {
        max = n;
        min = m;
    }
    cout << max - 1 << " " << min;
} 
