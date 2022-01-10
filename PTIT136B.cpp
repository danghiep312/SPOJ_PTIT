#include <bits/stdc++.h>
using namespace std;
 
int r, c, a, b;
char card[200][200];
 
void init() {
    cin >> r >> c;
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            cin >> card[i][j];
        }
    }
    cin >> a >> b;
}
 
void process() {
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            card[i][2*c + 1 - j] = card[i][j];
        }
    }
    for (int i = r + 1; i <= 2*r; i++) {
        for (int j = 1; j <= 2*c; j++) {
            card[i][j] = card[2*r + 1 - i][j];
        }
    }
    if (card[a][b] == '#') {
        card[a][b] = '.';
    }
    else {
        card[a][b] = '#';
    }
}
 
void xuat() {
    for (int i = 1; i <= 2*r; i++) {
        for (int j = 1; j <= 2*c; j++) {
            cout << card[i][j];
        }
        cout << endl;
    }
}
 
int main() {
    init();
    process();
    xuat();
} 
