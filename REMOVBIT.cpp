#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string a;
    cin >> a;
    string b;
    int tick = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '0' && tick == 0) {
            tick = 1;
            continue;
        }        
        else {
            b += a[i];
        }
    }
    if (tick == 0) {
        b.pop_back();
    }
    cout << b;
} 
