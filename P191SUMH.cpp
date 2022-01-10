#include <bits/stdc++.h>
using namespace std;
 
int a[100][100];
int n;
 
void init() {
    cin >> n;
    char tmp;
    for (int i = 0; i <= n + 1; i++) {
        for (int j = 0; j <= n + 1; j++) {
            if (i == 0 || j == 0 || i == n + 1 || j == n + 1) {
                a[i][j] = 1;
            }
            else {
                cin >> tmp;
                if (tmp == '.') a[i][j] = 0;
                else a[i][j] = 1;
            }
        }
    }
}
 
void process() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == 0 && a[i + 1][j] == 0 && a[i - 1][j] == 0 && a[i][j + 1] == 0 && a[i][j - 1] == 0) {
                a[i][j] = 1;
                a[i + 1][j] = 1;
                a[i - 1][j] = 1;
                a[i][j + 1] = 1;
                a[i][j - 1] = 1;
            }
        }
    }
 
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == 0) {
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
}
 
int main() {
    init();
    process();
} 
