#include <bits/stdc++.h>
using namespace std;
 
int n;
vector<int> a, b;
 
void init() {
    cin >> n;
    a.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
}
 
void process() {
    b.resize(n + 1);
    for (int i = 1; i <= n; i++) {
        b[a[i]] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << b[i] << " ";
    }
}
 
int main() {
    init();
    process();
} 
