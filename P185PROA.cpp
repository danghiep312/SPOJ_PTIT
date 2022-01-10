#include <bits/stdc++.h>
using namespace std;
 
string result(string a) {
    string tmp;
    int j = 0;
    while (a[j] == '0') j++;
    for (int i = j; i < a.size(); i++) {
        if (a[i] < '5') tmp += a[i];
		else tmp += (9 - (a[i] - '0')) + '0';
    }
    if (tmp[0] == '0') tmp[0] = '9';
    return tmp;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        cout << result(a) << endl;
    }
}
 
 
