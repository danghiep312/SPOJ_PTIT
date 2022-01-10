#include <bits/stdc++.h>
using namespace std;
 
int odd, even, n;
vector<int> a;
 
void init() {
    cin >> n;
    odd = 0, even = 0;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) even++;
        else odd++;
    }
}
 
void process() {
    if (odd == 0) {
        cout << "NO";
        return;
    }
    if (even == 0) {
        if (n % 2 == 0) {
            cout << "NO";
        }
        else {
            cout << "YES";
        }
        return;
    }
    cout << "YES";
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        init();     
        process();
        cout << endl;
    }
} 
