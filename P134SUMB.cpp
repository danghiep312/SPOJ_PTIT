#include <bits/stdc++.h>
using namespace std;
 
long long g,y;
 
int main() {
    cin >> g >> y;
    long long c = (g + y);
    long long b = (g + 4)/2;
 
    long long delta = b*b - 4*c;
 
    long long x = (b + sqrt(delta))/2;
    long long y = (b - sqrt(delta))/2;
    if (x > y) {
        cout << y << " " << x;
    }
    else {
        cout << x << " " << y;
    }
} 
