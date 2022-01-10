#include <bits/stdc++.h>
using namespace std;
 
string s[4];
 
void init() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> s[i][j];
        }
    }
}
 
 
 
void process() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            int cB = 0;
            int cW = 0;
            if (s[i][j] == '#') cB++;
            else cW++;
            if (s[i][j + 1] == '#') cB++;
            else cW++;
            if (s[i + 1][j] == '#') cB++;
            else cW++;
            if (s[i + 1][j + 1] == '#') cB++;
            else cW++;
            if (cW > 2 || cB > 2) {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
}
 
int main() {
    init();
    process();
} 
