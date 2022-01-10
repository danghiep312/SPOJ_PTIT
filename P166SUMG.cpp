#include <bits/stdc++.h>
using namespace std;
long long a, b, c;
void process() {
    cin >> a >> b >> c;
    if (a == 0 && (b == 0 || c == 0)) cout << "NO";
    else {
        if (b == c) {
            cout << "YES";
        }
        else {
            if (abs(c - b) % 3 == 0) cout << "YES";
            else cout << "NO";
        }
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        process();
        cout << endl;
    }
} 
