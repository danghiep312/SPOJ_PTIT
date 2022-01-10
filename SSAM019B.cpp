#include <bits/stdc++.h>
using namespace std;
 
pair<int,int> a[100000];
int t, n;
 
void init() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i].first;
        a[i].second = i;
    }
}
 
void process() {
    int result = -1, minIndex = 100000;
    sort(a, a + n);
    for (int i = 1; i < n; i++) {
        if (a[i].first == a[i - 1].first && a[i - 1].second < minIndex) {
            result = a[i].first;
            minIndex = a[i - 1].second;
        }
    }
    if (result == -1) {
        cout << "NO" << endl;
    }
    else cout << result << endl;
}
 
int main() {
    cin >> t;
    while (t--) {
        init();
        process();
    }
} 
