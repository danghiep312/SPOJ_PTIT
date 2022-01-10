#include <bits/stdc++.h>
using namespace std;
int n;
vector<int> a;
int countt = 0, indexx = -1;
void init() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (i > 0 && a[i] < a[i - 1]) {
            countt++;
            indexx = i;
        }
    }
}
 
void process() {
    if (countt > 1) cout << -1;
    else if (countt == 0) cout << 0;
    else if (countt == 1) {
        if (a[0] >= a[indexx]) {
            cout << n - indexx;
        }
        else cout << -1;
    }
}
 
int main() {
    init();
    process();
} 
