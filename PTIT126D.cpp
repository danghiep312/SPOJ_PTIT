#include <bits/stdc++.h>
using namespace std;
 
int n;
vector<int> a;
 
void init() {
    cin >> n;
    a.resize(n + 1);
    a[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
}
 
void process() {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j < a[i] - a[i - 1]; j++) {
            cout << i << " ";
        }
    }
    cout << endl;
}
 
int main() {
    while(1) {
        init();
        if (n == 0) return 0;
        process();
    }
} 
