#include <bits/stdc++.h>
using namespace std;
 
struct Bo {
    int x, y, z;
};
 
vector<Bo> a;
int n;
void nhap() {
    cin >> n;
    a.resize(n);
    for (int i=  0; i < n; i++) {
        cin >> a[i].x >> a[i].y >> a[i].z;                         
    }
}
 
bool check(Bo a, Bo b) {
    if (a.x == b.x) {
        if (a.y == b.y) {
            return a.z < b.z;
        }
        return a.y < b.y;
    }
    return a.x < b.x;
}
 
int main() {
    nhap();
    sort(a.begin(), a.end(), check);
    for (int i = 0; i < n; i++) {
        cout << a[i].x << " " << a[i].y << " " << a[i].z << endl;
    }
} 
