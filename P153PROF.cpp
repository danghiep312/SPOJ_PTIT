#include <bits/stdc++.h>
using namespace std;
 
int n;
vector<int> a, b;
 
void init() {
    cin >> n;
    a.resize(n);
    b.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
}
 
void process() {
    int count = 0;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0;
    while (i < n && j < n) {
        if (a[i] < b[j]) {
            count++;
            i++;
            j++;
        }
        else {
            j++;
        }
    }
    cout << count;
}
 
int main() {
    init();
    process();
} 
