#include <bits/stdc++.h>
using namespace std;
 
struct Dra {
    int x, y;
};
 
vector<Dra> a;
int n, s;
 
void nhap() {
    cin >> s >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].x >> a[i].y;
    }
}
 
bool condi(Dra a, Dra b) {
    return a.x < b.x;
}
 
bool check() {
    sort(a.begin(), a.end(), condi);
    for (int i = 0; i < n; i++) {
        if (s > a[i].x) {
            s += a[i].y;
        }
        else {
            return false;
        }
    }
    return true;
}
 
int main() {
    nhap();
    if (check()) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}
 
