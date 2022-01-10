#include <bits/stdc++.h>
using namespace std;
 
int n;
vector<int> a;
int maxz;
int countMax = 0;
void init() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] == 1) countMax++;
    }
}
 
void process() {
    maxz = countMax;
    if (maxz == n) {
        cout << maxz - 1;
        return;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int count1 = 0, count0 = 0;
            for (int k = i; k <= j; k++) {
                if (a[k] == 0) {
                    count0++;
                }
                else count1++;
            }
            if (countMax - count1 + count0 > maxz) {
                maxz = countMax - count1 + count0;
            }
        }
    }
    cout << maxz;
}
 
int main() {
    init();
    process();
} 
