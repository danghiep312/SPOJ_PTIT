#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    while(cin >> s) {
        int count = 0;
        int f[26] = {0};
        for (int i = 0; i < s.size(); i++) {
            f[s[i] - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (f[i] % 2 == 1) count++;
        }
        if (count < 2 || count % 2 == 1) cout << "First\n";
        else cout << "Second\n";
    }
} 
