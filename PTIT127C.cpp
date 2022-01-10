#include <bits/stdc++.h>
using namespace std;
 
struct Con {
    int s, f;
};
 
vector<Con> a;
int n;
 
bool check(Con x, Con y) {
    return x.f < y.f;
}
 
void nhap() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].s >> a[i].f;
    }
}
 
void run() {
    sort (a.begin(), a.end(), check);
    int count = 0;
    int tmp = a[0].s;
    for (int i = 0; i < n; i++) {
        if (tmp <= a[i].s) {
            count++;
            tmp = a[i].f;
        }
    }
    cout << count;
}
 
int main() {
    nhap();
    run();
} 
