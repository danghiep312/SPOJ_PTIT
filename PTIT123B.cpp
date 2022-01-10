#include <bits/stdc++.h>
using namespace std;
 
vector<int> a;
int n;
 
void nhap() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
 
int checkResult() {
    for (int i = 1; i < n; i++) {
        if (a[i] != a[0]) return 0;
    }
    return 1;
}
 
void process() {
    int count = 0;
    while (checkResult() == 0) {
        int tmp = a[0];
        for (int i = 0; i < n; i++) {
            if (i == n - 1) {
                a[n - 1] = abs(a[n - 1] - tmp);
            }
            else {
                a[i] = abs(a[i] - a[i + 1]);
            }
        }
        count++;
        if (count > 1000) {
            break;
        }
        // for (int i = 0; i < n; i++) {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
    }
    if (count > 1000) {
        cout << "not attained";
    }
    else {
        cout << count << " " << "iterations";
    }
}
 
int main() {
    int k = 1;
    while(1) {
        nhap();
        if (n == 0) return 0; 
        cout << "Case " << k++ << ": ";
        process();
        cout << endl;
    }
} 
