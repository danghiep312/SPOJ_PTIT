#include <bits/stdc++.h>
using namespace std;
 
 
int snt(int k, int n) {
    int count = 0;
    vector<int> a(n + 1, 0);
    for (int i = 2; i <= n; i++) {
        if (a[i] == 0) {
            count++;
            if (count == k) return i;
            for (int j = i*i; j <= n; j += i) {
                if (a[j] == 0) {
                    a[j] = 1;
                    count++;
                }
                if (count == k) return j;
            }
        }
    }
}
 
void run() {
    int k, n;
    cin >> n >> k;
    cout << snt(k,n);
}
 
int main() {
    run();
} 
