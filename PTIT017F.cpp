#include <bits/stdc++.h>
using namespace std;
 
bool chia4(string a) {
    int sum = 0;
    sum = (a[a.size() - 2] - '0')*10 + (a[a.size() - 1] - '0');
    if (sum % 4 == 0) return true;
    return false;
}
 
bool chia9(string a) {
    int sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum += (a[i] - '0');
    }
    if (sum % 9 == 0) return true;
    return false;
}
 
bool result(string a) {
    if (a == "0") return true;
    if (a.size() < 2) return false;
    if (chia9(a) && chia4(a)) return true;
    return false;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        string a;
        cin >> a;
        if (result(a)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
} 
