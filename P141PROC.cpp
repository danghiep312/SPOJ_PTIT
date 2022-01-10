#include <bits/stdc++.h>
using namespace std;
 
string a;
 
int main() {
    int n, x = 0;
    cin >> n;
 
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a == "X++") {
            x++;
        }
        if (a == "X--") {
            x--;
        }
        if (a == "++X") {
            ++x;
        }
        if (a == "--X") {
            --x;
        }
    }
    cout << x;
} 
