#include <bits/stdc++.h>
using namespace std;
 
 
int x, n;
vector<int> b(50);
 
void nhap() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 6; j++) {
            cin >> x;
            b[x]++;
        }
    }
}
 
bool process() {
    for (int i = 1; i < 49; i++) {
        if (b[i] == 0) return false;
    }
    return true;
}
 
int main() {
    while(1) {
        for (int i = 0; i < 50; i++) {
            b[i] = 0;
        }
        nhap();
        if (n == 0) return 0;
        if (process()) {
            cout << "Yes";
        }
        else {
            cout << "No";
        }
        cout << endl;
    }
} 
