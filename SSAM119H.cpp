#include <bits/stdc++.h>
using namespace std;
 
int t;
 
bool div4(string n) {
    if (n.size() == 1) {
        if (n[0] == '4' || n[0] == '8') return true;
        return false;
    }
    else if (n.size() == 2) {
        int sum = (n[0] - 48)*2 + (n[n.size() - 1] - 48);
        if (sum % 4 == 0) return true;
        return false;
    }
    else {
        if (n[n.size() - 1] == '0' && n[n.size() - 2] == '0') return true;
        int sum = (n[n.size() - 1] - 48) + (n[n.size() - 2] - 48)*10;
        if (sum % 4 == 0) return true;
        return false;
    }
}
 
void process(string n) {
    if (div4(n)) cout << 4 << endl;
    else cout << 0 << endl;
}
 
int main() {
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        process(n);
    }
} 
