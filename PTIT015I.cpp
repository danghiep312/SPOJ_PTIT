#include <bits/stdc++.h>
using namespace std;
 
int n, t, k;
vector<int> a;
 
void init() {
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
 
void process() {
    int index;
    for (int i = 0; i < n; i++) {
        if (k - a[i] > 0) {
            k -= a[i];
        }
        else {
            index = i;
            break;
        }
    }
    cout << index << endl;
}
 
int main() {
    cin >> t;
    while (t--) {
        init();
        process();
    }
} 
