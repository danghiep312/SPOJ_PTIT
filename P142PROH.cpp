#include <bits/stdc++.h>
using namespace std;
 
int main() {
    char a[20][20];
    int r, c;
    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> a[i][j];
        }
    }
    int cot[11] = {0};
    int hang[11] = {0};
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (a[i][j] == 'S') {
                cot[j] = 1;
                hang[i] = 1;
            }
        }
    }
    int countC = 0;
    int countH = 0;
    for (int i = 0; i < c; i++) {
        if (cot[i] != 0) countC++;
    }
    for (int i = 0; i < r; i++) {
        if (hang[i] != 0) countH++;
    }
 
    cout << (r - countH)*c + (c - countC)*r -(r - countH)*(c - countC);
} 
