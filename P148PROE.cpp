#include <bits/stdc++.h>
using namespace std;
 
string a, b, c;
int n;
 
void init() {
    cin >> n;
    if (n == 0) return;
    cin >> a >> b >> c;
}
 
void process() {
    int count = 0;
    bool tick = true;
    while(1) {
        if (!tick) break;
        count++;
        if (count > 50) {
            tick = false;
            break;
        }
        string tmp = "";
        for (int i = 0; i < n; i++) {
            tmp += b[i];
            tmp += a[i];
        }
        if (tmp == c) {
            cout << count;
            return;
        }
        else {
            for (int i = 0; i < n; i++) {
                a[i] = tmp[i];
            }
            for (int i = n; i  <2*n; i++) {
                b[i - n] = tmp[i];
            }
        }
    }
    if (!tick) cout << -1;
    else cout << count;
}
 
int main() {
    while (1) {
        init();
        if (n == 0) return 0;
        process();
        cout << endl;
    }
} 
