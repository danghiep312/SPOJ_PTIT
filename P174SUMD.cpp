#include <bits/stdc++.h>
using namespace std;
 
int x, y;
int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
 
int main() {
    cin >> x >> y;
    int day = a[x], res;
    if (y == 1) {
        res = day/7;
        if (day % 7 != 0) res++;
    }
    else {
        res = 1;
        day -= (8 - y);
        res += day/7;
        if (day % 7 != 0) res++;
    }
    cout << res;
} 
