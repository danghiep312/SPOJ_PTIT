#include <bits/stdc++.h>
using namespace std;
 
string s;
vector<int> a;
 
void init() {
    cin >> s;
    a.push_back(0);
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == s[i + 1]) {
            a.push_back(a[i] + 1);
        }
        else a.push_back(a[i]);
    }
}
 
void process() {
    int l, r;
    cin >> l >> r;
    cout << a[r - 1] - a[l - 1] << endl;
}
 
int main() {
    init();
    int t;
    cin >> t;
    while (t--) {
        process();
    }
} 
