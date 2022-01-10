#include <bits/stdc++.h>
using namespace std;
 
bool check(string a) {
    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0 && (a[i] - 48) % 2 == 0) return false;
        if (i % 2 != 0 && (a[i] - 48) % 2 != 0) return false;
    }
    return true;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        string a;
        cin >> a;
        if (check(a)) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
        cout << endl;
    }
} 
