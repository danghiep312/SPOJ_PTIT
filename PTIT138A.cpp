#include <bits/stdc++.h>
using namespace std;
 
long long a, b, c;
 
bool check (long long a, long long b, long long c) {
    if (a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a) return true;
    return false;
}
 
int main() {
    while(1) {
        cin >> a >> b >> c;
        if (a == 0 && b == 0 && c == 0) return 0;
        if (check(a, b, c)) {
            cout << "right";
        }
        else {
            cout << "wrong";
        }
        cout << endl;
    }
} 
