#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
    int ti = 0, teo = 0, equ = 0;
    for (int i = 1; i < 7; i++) {
        if (abs(i - a) < abs(i - b)) {
            ti++;
        }
        else if (abs(i - a) > abs(i - b)) {
            teo++;
        }
        else {
            equ++;
        }
    }
    cout << ti << " " << equ << " " << teo;
} 
