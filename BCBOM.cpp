#include <bits/stdc++.h>
using namespace std;
char a[105][105];
 
int c[105][105];
 
int main() {
    while (true) {
        int b[105][105] = {0};
        int n, m;
        cin >> n >> m;
        if (n == 0 && m == 0) return 0;
        else {
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                    cin >> a[i][j];
                    if (a[i][j] == '*') {
                        b[i][j] = 1;
                    }
                }
            }
            for (int i = 1; i <= n ;i++) {
                for (int j = 1; j <= m; j++) {
                    c[i][j] = b[i - 1][j - 1] + b[i - 1][j] + b[i - 1][j + 1] + b[i][j - 1] + b[i][j + 1]
					+ b[i + 1][j - 1] + b[i + 1][j] + b[i + 1][j + 1];
                }
            }
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= m; j++) {
                    if (a[i][j] != '*') {
                        cout << c[i][j];
                    }
                    else {
                        cout << "*";
                    }
                }
                cout << endl;
            }
        }
    }
} 
