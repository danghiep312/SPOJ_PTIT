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
    sort(a.begin(), a.end());
}
 
void process() {
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (i != 0) {
            a[i] += a[i - 1];
        }
        if (a[i] <= 300) {
            sum += a[i];
            count++;
        }
    }
    cout << count << " " << sum;
}
 
int main() {
    init();
    process();
} 
