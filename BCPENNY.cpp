#include <bits/stdc++.h>
#include <string.h>
using namespace std;
int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int x, a[8] = {0};
        cin >> x;
        string b;
        cin >> b;
        for (int i = 0; i < 38; i++) {
            if (b[i] == 'T' && b[i + 1] == 'T' && b[i + 2] == 'T') {
                a[0]++;
            }
            if (b[i] == 'T' && b[i + 1] == 'T' && b[i + 2] == 'H') {
                a[1]++;
            }
            if (b[i] == 'T' && b[i + 1] == 'H' && b[i + 2] == 'T') {
                a[2]++;
            }
            if (b[i] == 'T' && b[i + 1] == 'H' && b[i + 2] == 'H') {
                a[3]++;
            }
            if (b[i] == 'H' && b[i + 1] == 'T' && b[i + 2] == 'T') {
                a[4]++;
            }
            if (b[i] == 'H' && b[i + 1] == 'T' && b[i + 2] == 'H') {
                a[5]++;
            }
            if (b[i] == 'H' && b[i + 1] == 'H' && b[i + 2] == 'T') {
                a[6]++;
            }
            if (b[i] == 'H' && b[i + 1] == 'H' && b[i + 2] == 'H') {
                a[7]++;
            }
        }
        cout << x << ' ';
        for (int i = 0; i < 8; i++) {
            cout << a[i] << ' ';
        }
        cout << endl;
    }
} 
