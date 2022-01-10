#include <bits/stdc++.h>
using namespace std;
 
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, -1, -1, -1, 0, 1, 1, 1};
string s[100];
int r, c, res = 0;
 
int countt(int x, int y) {
    int u, v;
    int count = 0;
    for (int i = 0; i < 8; i++) {
        u = x + dx[i];
        v = y + dy[i];
        if (u < 0 || u >= r || v < 0 || v >= c) continue;
        if (s[u][v] == 'o') count++;
    }
    return count;
}
 
void datvitri(){ 
    int max = -1, x, y;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (s[i][j] == '.') {
                int tmp = countt(i, j);
                if (tmp > max) {
                    max = tmp;
                    x = i;
                    y = j;
                }
            }
        }
    }
    if (max != -1) s[x][y] = 'o';
}
 
int main() {
    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        cin >> s[i];
    }
    datvitri();
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (s[i][j] == 'o') {
                res += countt(i, j);
            }
        }
    }
    cout << res/2;
} 
