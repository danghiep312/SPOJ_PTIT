#include <bits/stdc++.h>
using namespace std;
 
vector<int> a (1e6 + 1, 0);
int l, r;
void snt() {
    a[1] = 1;
    for (int i = 1; i <= 1e6; i++) {
        for (int j = i; j <= 1e6; j += i) {
            a[j] += i;
        }
    }
}
 
void process() {
    snt();
    cin >> l >> r;
    int count = 0;
    for (int i = l; i <= r; i++) {
        if (a[i] - i > i) count++;
    }
    cout << count;
}
 
int main() {
    process();
} 
