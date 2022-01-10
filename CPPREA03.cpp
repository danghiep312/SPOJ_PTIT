#include <bits/stdc++.h>
using namespace std;
 
int minSwap (int a[], int n, int k) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= k) count++;
    }
    int tmp = 0;
 
    for (int i = 0; i < count; i++) {
        if (a[i] > k) tmp++;
    }
    int ans = tmp;
 
    for (int i = 0, j = count; j < n;  i++, j++) {
        if (a[i] > k) tmp--;
        if (a[j] > k) tmp++;
        ans = min(ans, tmp);
    }
    return ans;
}
 
void process() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << minSwap(a, n, k) << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        process();
    }
} 
