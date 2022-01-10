#include <bits/stdc++.h>
using namespace std;
 
struct Per {
    string name;
    int d,m,y;
};
 
vector<Per> a;
int n;
 
void nhap() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].name;
        cin >> a[i].d >> a[i].m >> a[i].y;
    }
}
 
bool check(Per a, Per b) {
    if (a.y == b.y) {
        if (a.m == b.m) return a.d < b.d;
        return a.m < b.m;
    }
    return a.y < b.y;
}
 
int main() {
    nhap();
    sort(a.begin(), a.end(), check);
    cout << a[n - 1].name << endl << a[0].name;
} 
