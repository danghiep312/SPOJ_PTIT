#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int r, c, a, b;
    cin >> r >> c >> a >> b;
    char nhap[1000][1000];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> nhap[i][j];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < a; j++) {
            for (int k = 0; k < c; k++) {
                for (int l = 0; l < b; l++) {
                    cout << nhap[i][k];
                }
            }
            cout << endl;
        }
    }
}
 
