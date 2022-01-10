#include <bits/stdc++.h>
using namespace std;
 
int n, m, COUNT = 0;
vector<int> a;
 
void nhap() {
    cin >> n >> m;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
 
void result () {
    for(int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] + a[j] == m) COUNT++;
        }
    }
    cout << COUNT;
}
 
int main() {
    nhap();
    result();
} 
