#include <bits/stdc++.h>
using namespace std;
 
int MAX = 0; 
string a;
 
void run() {
    cin >> a;
    int L = 0, R = 0;
    int L_MAX = 0, R_MAX = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 'L') {
            L++;
            L_MAX++;
            if (L_MAX - R > MAX) MAX = L_MAX - R;
        }
        else if (a[i] == 'R') {
            R++;
            R_MAX++;
            if (R_MAX - L > MAX) MAX = R_MAX - L;
        }
        else {
            L_MAX++;
            if (L_MAX - R > MAX) MAX = L_MAX - R;
            R_MAX++;
            if (R_MAX - L > MAX) MAX = R_MAX - L;
        }
    }
    cout << MAX;
}
 
int main() {
    run();
} 
