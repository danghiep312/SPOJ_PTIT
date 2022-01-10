#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long r, x0, y0, x1, y1;
    cin >> r >> x0 >> y0 >> x1 >> y1;
    long long range = (x1 - x0)*(x1 - x0) + (y1 - y0)*(y1 - y0);
    double k = sqrt(range);
    if (x1 == x0 && y1 == y0) {
        cout << 0;
    }
    else {
        if (k/2 <= r) {
            cout << 1;
        }
        else {
            long long count = 0;
            do {
                k = k - (double) (r*2);
                count++;
            }
            while (k/2 > r);
            cout << count + 1;
        }
    }
} 
