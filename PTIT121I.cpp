#include <bits/stdc++.h>
using namespace std;
 
int t, r;
string s;
 
void inR(int j) {
    for (int i = 0; i < r; i++) {
        cout << s[j];
    }
}
 
void run() {
    int x;
    cin >> t;
    while (1) {
        cin >> x >> r >> s;
        cout << x << " ";
        for (int i = 0; i < s.size(); i++) {
            inR(i);
        }
        if (x == t) break;
        cout << endl;
    }
}
 
int main() {
    run();
} 
