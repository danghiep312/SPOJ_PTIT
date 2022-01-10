#include <bits/stdc++.h>
using namespace std;
 
string s[55];
int r, c, res = 0;
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, -1, -1, -1, 0, 1, 1, 1};
 
int dem(int x, int y) {
    int u, v;
    int count = 0;
    for (int i = 0; i < 8; i++) {
        u = x + dx[i];
        v = y + dy[i];
        if (u < 0 || u >= r || v < 0 || v >= c) {
            continue;
        }
        if (s[u][v] == 'o') count++;
    }
    return count;
}
 
void dat() {
    int max = -1, inX, inY;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (s[i][j] == '.') {
                int d = dem(i,j);
                if (d > max) {
                    max = d;
                    inX = i;
                    inY = j;
                }
            }
        }
    }
    if (max != -1) s[inX][inY] = 'o';
}
 
main() {
    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        cin >> s[i];
    }
    dat();
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (s[i][j] == 'o') {
                res += dem(i,j);
            }
        }
    }
    cout << res/2;
} 
