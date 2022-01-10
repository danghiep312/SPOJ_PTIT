#include <bits/stdc++.h>
using namespace std;
 
string a;
int r, c;
 
void init() {
    cin >> a;
    int n = a.size();
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            r = i;
        }
    }
    c = n/r;
}
 
void process(){ 
    int k = 0;
    char s[r][c];
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            s[j][i] = a[k++];
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << s[i][j];
        }
    }
}
 
int main() {
    init();
    process();
} 
