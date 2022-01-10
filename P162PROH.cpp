#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x;
    cin >> x;
    int count = 0, i = 1, d = 1;
    while (x > 0) {
        x -= d;
        i++;
        d += i;
        count++;
    }
    cout << count - 1;
} 
