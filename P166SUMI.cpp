#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a[2] = {0};
    int tmp, n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a[tmp]++;
    }
    if (a[0] == 1) cout << "YES";
    else cout << "NO";
} 
