#include <bits/stdc++.h>
using namespace std;
 
vector<int> a;
vector<int> b;
int n, T;
 
void nhap() {
    cin >> n;
    a.resize(n);
    b.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
}
 
void reSort() {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
}
 
bool check() {
    for (int i = 0; i < n; i++) {
        if (a[i] > b[i]) return false;
    }
    return true;
}
 
void run() {
    cin >> T;
    while (T--) {
        nhap();
        reSort();
        if (check()) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}
 
int main() {
    run();
} 
