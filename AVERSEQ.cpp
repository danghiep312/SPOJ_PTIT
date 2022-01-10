#include<bits/stdc++.h>
using namespace std;
// tru cac phan tu cho k bai toan tro ve tim doan dai nhat tong >= 0
vector<long long> a;
long long n, k, sum = 0, res;
 
void init() {
    cin >> n >> k;
    a.resize(n);
    res = n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i] -= k;
        sum += a[i];
    }
}
 
void process() {
    int i = 0, j = a.size() - 1;
    while (res != 0 && sum < 0) {
        if (a[i] > a[j]) {
            sum -= a[j];
            j--;
        }
        else {
            sum -= a[i];
            i++;
        }
        res--;
    }
    cout << res;
}
 
int main() {
    init();
    process();
} 
