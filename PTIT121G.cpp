#include <bits/stdc++.h>
using namespace std;
 
int n;
int a[102][102];
 
int init() {
    cin >> n;
    if (n == 0) return 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    return 1;
}
 
int chia() {
    vector<int> n1;
    vector<int> n2;
 
    for (int i = 1; i <= n; i++) {
        int check1 = 0;
        for (int j = 0; j < n1.size(); j++) {
            if (a[i][n1[j]] == 1) {
                check1 = 1;
                break;
            }
        }
        int check2 = 0;
        for (int j = 0; j < n2.size(); j++) {
            if (a[i][n2[j]] == 1) {
                check2 = 1;
                break;
            }
        }
        if (check1 == 1 && check2 == 1) {
            return 0;
        }
        else if (check1 == 1 && check2 == 0) {
            n2.push_back(i);
        }
        else if (check1 == 0 && check2 == 1) {
            n1.push_back(i);
        }
        else {
            n1.push_back(i);
        }
    }
    return 1;
}
 
int main() {
    while (init()) {
        if (chia()) {
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
} 
