#include <bits/stdc++.h>
using namespace std;
 
int n, COUNT = 0;
string a[101];
 
void init() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
 
void process() {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] == 'C') {
                for (int  k = i + 1; k < n; k++) {
                    if (a[k][j] == 'C') COUNT++;
                }
                for (int k = j + 1; k < n; k++) {
                    if (a[i][k] == 'C') COUNT++;
                }
            }
        }
    }
    cout << COUNT;
}
 
int main() {
    init();
    process();
} 
