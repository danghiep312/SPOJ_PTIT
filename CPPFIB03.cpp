#include <bits/stdc++.h>
using namespace std;
 
vector<int> a(100);
vector<int> b(1001, 0);
 
void init() {
    a[0] = 0;
    b[0]++;
    a[1] = 1;
    b[1]++;
    for (int i = 2; i < 20; i++) {
        a[i] = a[i - 2] + a[i - 1];
        b[a[i]]++;
    }
}
 
void process() {
    int n;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (b[x] != 0) cout << x << " ";
    }
}
 
int main() {
    init();
    int t;
    cin >> t;
    while (t--) {
        process();
        cout << endl;
    }
} 
