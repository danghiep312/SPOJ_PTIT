#include <bits/stdc++.h>
 
using namespace std;
 
int n, h[11][11] = {0};
int a[8] = {2, 2, 1, 1, -1, -1, -2, -2};
int b[8] = {1, -1, 2, -2, 2, -2, 1, -1};
bool stop = true;
void in() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << h[i][j] << " ";
        }
        cout << endl;
    }
}
 
void Try(int i, int x, int y) {
    if (!stop) return;
    int u, v;
    for (int k = 0; k <= 7; k++) {
        u = x + a[k];
        v = y + b[k];
        if (1 <= u && u <= n && 1 <= v && v <= n && h[u][v] == 0) {
            h[u][v] = i;
            if (i < n*n) {
                Try(i + 1, u, v);
                h[u][v] = 0;
            }
            else {
                in();
                stop = false;
                return;
            }
        }
    }
}
 
int main() {
    int x, y;
    cin >> n >> x >> y;
    h[x][y] = 1;
    Try(2, x, y);
} 
