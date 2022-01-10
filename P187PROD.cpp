#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s;
    cin >> s;
    int a[127] = {0}, b[127] = {0}, check[127] = {0};
    for (int i = 0; i < s.size(); i++) {
        if(check[s[i]] == 0) {
            check[s[i]] = 1;
            a[s[i]] = i;
        }
        else {
            b[s[i]] = i;
        }
    }
    int count = 0;
    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++) {
            if (a[j] > a[i] && b[i] > a[j] && b[j] > b[i]) count++;
        }
    }
    cout << count;
} 
