#include <bits/stdc++.h>
using namespace std;
 
int n, k;
vector<int> a;
 
void init() {
    cin >> n >> k;
    a.resize(n);
    for (int i = 0; i < n; i++) cin >> a[i];
}
 
void process() {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == 0) break;
        if (a[i] >= a[k - 1]) count++;
        else break;
    }
    cout << count;
}
 
int main() {
    init();
    process();
} 
