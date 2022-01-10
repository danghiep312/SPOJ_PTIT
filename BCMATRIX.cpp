#include <bits/stdc++.h>
using namespace std;
 
int a[500][500];
 
int beau(int i, int j, int n) {
    int sum = 0, x, y, count; 
    count = 0;
    x = i;
    y = j;
    while (count < n) {
        sum += a[x][y];
        x++;
        y++;
        count++;
    }
    x = i + n - 1;
    y = j;
    count = 0;
    while (count <  n) {
        sum -= a[x][y];
        x--;
        y++;
        count++;
    }
    return sum;
}
 
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    int MAX = -100000;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1; j++) {
            for (int k = 2; k <= n - max(i, j); k++) {
                
                MAX = beau(i, j, k) > MAX ? beau(i, j, k) : MAX;
            }
        }
    }
    cout << MAX;
} 
