#include <bits/stdc++.h>
using namespace std;
 
void process() {
    int k, s, res, sum = 0, count = 0, n;
    cin >> k;
    n = (log(k)/log(2)) + 1;
    s = pow(2, n);
    res = s;
    while (sum != k && s > 0) {
        if (sum == k) break;
        if (sum + s/2 <= k) {
            sum += s/2;
        }
        s /= 2;
        count++;
    }
    if (count == 1) {
        cout << res/2 << " " << 0;
    }
    else {
        cout << res << " " << count;
    }
}
 
int main() {
    process();
} 
