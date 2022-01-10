#include <bits/stdc++.h>
using namespace std;
 
vector<int> a(1e6, 0);
int n, tmp;
 
void init() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a[tmp] = 1;
    }
}
 
void process() {
    int max = 0;
    for (int i = 1e6; i > max; i--) {
        if (a[i]) {
            for (int j = i - max - 1; j > max; j--) {
                if (a[j]) {
                    if (i % j > max) max = i % j;
                }
            }
        }
    }
    cout << max;
}
 
int main() {
    init();
    process();
} 
