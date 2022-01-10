#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string a;
    cin >> a;
    int count = 0;
    for (int i = 0; i < a.size(); i++) {
        int tick = 0;
        for (int j = i - 1; j >= 0; j--) {
            if (a[i] == a[j]) {
                tick = 1;
                break;
            }
        }
        if (tick == 0) count++;
    }
    if (count % 2 == 0) {
        cout << "CHAT WITH HER!";
    }
    else {
        cout << "IGNORE HIM!";
    }
} 
