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
 
void result() {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i] != a[i + 1]) {
            count++;
        } 
    }
    cout << count;
}
 
int main() {
    nhap();
    result();
}
 
