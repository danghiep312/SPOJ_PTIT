#include <bits/stdc++.h>
using namespace std;
 
string s;
 
int main() {
    cin >> s;
    int n = s.size();
    s = '*' + s;
    for (int i = 1; i <= n; i++) {
        if (s[i] == 'r') cout << i << " ";
    }
    for (int i = n; i >= 0; i--) {
        if (s[i] == 'l') cout << i << " ";
    }
} 
