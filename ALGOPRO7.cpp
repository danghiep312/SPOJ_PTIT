#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
 
using namespace std;
 
int main() {
    vector<int> a;
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        int d;
        cin >> d;
        a.push_back(d);
    }
    sort(a.begin(), a.end());
    cout << a[k];
} 
