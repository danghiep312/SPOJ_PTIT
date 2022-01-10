#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    int n, row, col;
    cin >> n;
    int a[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int max = a[1], min = 0, move = a[1];
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            move -= a[i];
            if (move < min) min = move;
        }
        else {
            move += a[i];
            if (move > max) max = move;
        }
    }
    col = 0;
    row = max + abs(min);
    for (int i = 1; i <= n; i++) {
        col += a[i];
    }
    int d[row + 1][col + 1];
 
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            d[i][j] = 0;
        }
    }
    int rowMove = row - abs(min);
    int x = 1, count = 0;
    int colMove = 1;
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= a[i]; j++) {
            if (i % 2 != 0) {
                d[rowMove][colMove++] = 1;
                if (j < a[i]) rowMove--;
            }
            else {
                d[rowMove][colMove++] = 2;
                if (j < a[i]) rowMove++;
            }
        }
    }
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            if (d[i][j] == 1) cout << "/";
            if (d[i][j] == 2) cout << "\\";
            if (d[i][j] == 0) cout << " ";
        }
        cout << endl;
    }
} 
