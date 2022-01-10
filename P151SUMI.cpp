#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    int a[2];
    a[0] = 1;
    a[1] = 0;
    string s1, s2, tmp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        if (i == 0) cin >> s1;
        else {
            cin >> tmp;
            if (tmp != s1) {
                a[1]++;
                if (s2.empty()) {
                    s2 = tmp;
                }
            }
            else {
                a[0]++;
            }
        }
    }
    if (a[1] > a[0]) {
        cout << s2;
    }
    else {
        cout << s1;
    }
} 
