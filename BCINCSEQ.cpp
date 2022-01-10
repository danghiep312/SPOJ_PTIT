#include <bits/stdc++.h>
using namespace std;
 
vector<int> a, b;
int n;
int MAX = 0;
 
void nhap() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    b.resize(n);
}
 
void run() {
    b[0] = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] >= a[i - 1]) {
            b[i] = b[i - 1] + 1;
        }
        else {
            b[i] = 1;
        }
    }
    for (int i = 0; i < n; i++) {
        MAX = b[i] > MAX ? b[i] : MAX;
    }
}
 
int main() {
    nhap();
    run();
    cout << MAX;
} 
