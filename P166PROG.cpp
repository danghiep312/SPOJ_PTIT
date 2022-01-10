#include <bits/stdc++.h>
using namespace std;
 
string a, b;
int n;
 
void init() {
    cin >> n >> a >> b;
}
 
void process() {
    int res = 0;
    for (int i = 0; i < a.size(); i++) {
        int tmp = abs(a[i] - b[i]);
        //cout << tmp << " ";
        if (tmp < 5) res += tmp;
        else res += (10 - tmp);
    }
    cout << res;
}
 
int main() {
    init();
    process();
} 
