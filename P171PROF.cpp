#include <bits/stdc++.h>
using namespace std;
 
int n;
vector<int> a;
 
void init() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
 
void process() {
    sort(a.begin(), a.end());
    int tmp = 0, count = 1;
    for (int i = 1; i < n; i++) {
        tmp += a[i - 1];
        if (a[i] >= tmp) {
            count++;
        }
        else {
            tmp -= a[i];
        }
    }
    cout << count;
}
 
int main() {
    init();
    process();
} 
