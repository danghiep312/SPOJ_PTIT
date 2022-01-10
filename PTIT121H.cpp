#include <bits/stdc++.h>
using namespace std;
 
vector<int> a;
int m, k;
string s;
 
void init() {
    cin >> m >> k >> s;
    a.resize(m);
    for (int i = 0; i < m; i++) {
        a[i] = i;
    }
}
 
void run() {
    int x = 0;
    init();
    for (int i = 0; i < s.size() - 1; i++) {
        if (s[i] == 'A') {
            a.push_back(a[x]);
            x++;
        }
        if (s[i] == 'B') {
            a.push_back(a[x + 1]);
            a[x + 1] = a[x];
            x++;
        }
    }
    cout << a[x + k - 1] << " " << a[x + k] << " " << a[x + k + 1];
}
 
int main() {
    run();
} 
