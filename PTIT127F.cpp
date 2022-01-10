#include <bits/stdc++.h>
using namespace std;
 
vector<int> a;
int n;
 
void init() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
 
void process() {
    int count = 0;
    int x = n;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == x) {
            x--;
        }
        else {
            count++;
        }
    }
    cout << count;
}
 
int main() {
    init();
    process();
} 
