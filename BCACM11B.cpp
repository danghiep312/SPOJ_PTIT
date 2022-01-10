#include <bits/stdc++.h>
using namespace std;
 
int t;
vector<vector<int> > a (101, vector<int> (101));
 
int result(int n, int x, int y) {
    int col = n;
    int row = n;
    int p = 0, k = 1;
    while (k <= n*n) {
        for (int i = p; i < col; i++) {
            a[p][i] = k++;
        }
        for (int i = p + 1; i < row; i++) {
            a[i][col - 1] = k++;
        }
        for (int i = col - 2; i >= p; i--) {
            a[row - 1][i] = k++;
        }
        for (int i = row - 2; i > p; i--) {
            a[i][p] = k++;
        }
        p++; row--; col--;
    }
    return a[x - 1][y - 1];
}
 
void run() {
    int n, x, y;
    cin >> t;
    while (t--) {
        cin >> n >> x >> y;
        cout << result(n, x, y) << endl;
    }
}
 
int main() {
    run();
} 
