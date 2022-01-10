#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<vector<int>> s (n, vector<int> (n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> s[i][j];
        }
    }
    if (n == 2) {
        if (s[0][1] % 2 == 0) {
            cout << s[0][1]/2 << " " << s[0][1]/2;
        }
        else {
            cout << "1" << " " << s[0][1] - 1;
        }
    }
    else {
        int tmp = s[0][1] - s[1][2];
        int res = (s[0][2] + tmp)/2;
        cout << res;
        for (int i = 1; i < n; i++) {
            cout << " " << s[0][i] - res;
        }
    }
} 
