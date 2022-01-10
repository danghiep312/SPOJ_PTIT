#include<bits/stdc++.h>
using namespace std;
 
int n, m;
vector<int> a, b;
vector<int> c(10, 0);
 
void init() {
    cin >> n >> m;
    a.resize(n);
    b.resize(m);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
        c[b[i]]++;
    }
}
 
void process() {
    for(int i = 0; i < n; i++) {
        if (c[a[i]] > 0) cout << a[i] << " ";
    }
}
 
int main() {
    init();
    process();
} 
