#include <bits/stdc++.h>
using namespace std;
 
string a, b;
int n;
//01234567890
 
void init() {
    cin >> n;
    cin >> a >> b;
}
 
void process() {
    int res = 0;
    for (int i = 0; i < n; i++) {
        int tmp = abs(a[i] - b[i]);
        if (tmp == 0) continue;
        if (tmp <= 5) res += tmp;
        else res += (10 - tmp);
    }
    cout << res;
}
 
int main() {
    init();
    process();
} 
