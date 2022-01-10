#include <bits/stdc++.h>
using namespace std;
 
vector<int> a, b;
int n;
 
void init() {
    cin >> n;
    a.resize(n);
    b.resize(2*n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort (a.begin(), a.end());  
}
 
void process() {
    int index = n - 1;
    for (int i = 0; i < 2*n; i += 2) {
        b[i] = a[index--];
        
    }
    index = 0;
    for (int i = 1; i < 2*n; i += 2) {
        b[i] = a[index++];
    }
    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        init();
        process();
    }
}
 
