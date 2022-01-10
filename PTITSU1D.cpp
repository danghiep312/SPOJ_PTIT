#include <bits/stdc++.h>
using namespace std;
 
int n, m;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> m >> n;
        vector<vector<char> > a (5*m + 2, vector<char> (5*n + 2));
        vector<int> b(5, 0);
        for (int i = 0; i < 5*m + 1; i++) {
            for (int j = 0; j < 5*n + 1; j++) {
                cin >> a[i][j];
            }
        }
        for (int i = 1; i < 5*m + 1; i += 5) {
            for (int j = 1; j < 5*n + 1; j += 5) {
                int count = 0;
                for (int k = i; k < i + 4; k++) {
                    if (a[k][j] == '*') {
                        count++;
                    }
                }
                b[count]++;
            }
        }
        for (int i = 0; i < 5; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
    }
} 
