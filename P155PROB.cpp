#include <bits/stdc++.h>
using namespace std;
 
int s, x;
vector<int> a(5);
 
void nhap() {
    cin >> s >> x;
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
        a[i] -= s*x;
    }
}
 
void process() {
    for (int i = 0; i < 5; i++) {
        cout << a[i] << " ";
    }
}
 
int main() {
    nhap();
    process();
} 
