#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
vector<int> b(1e7 + 7, 0);
int n;
 
void init() {
    cin >> n;
    ll tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if (tmp >= 0 && tmp <= 1e7) {
            b[tmp] = 1;
        }
    }
}
 
void process() {
    for (int i = 0; i < n; i++) {
        if (b[i] != 0) {
            cout << i << " ";
        }
        else {
            cout << -1 << " ";
        }
    }
    for (int i = 0; i <= 1e7; i++) {
        b[i] = 0;
    }
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        init();
        process();
        cout << endl;
    }
} 
