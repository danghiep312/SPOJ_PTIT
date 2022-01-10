#include <bits/stdc++.h>
using namespace std;
 
 
void result(string a, string b, string c, int n,int count) {
    if (count > 50) {
        cout << "-1";
        return;
    }
    string s;
    for (int i = 0; i < n; i++) {
        s += b[i];
        s += a[i];
    }
    if (s == c) {
        cout << count;
        return;
    }
    string tmp1, tmp2;
    for (int i = 0; i < n ; i++) {
        tmp1 += s[i];
    }
    for (int i = n; i < 2*n; i++) {
        tmp2 += s[i];
    }
    result(tmp1, tmp2, c, n, count + 1);
}
 
int main() {
    while(1) {
        int n;
        string a, b, s;
        cin >> n;
        if (n == 0) return 0;
        cin >> a >> b >> s;
        result(a,b,s,n,1);
        cout << endl;
    }
} 
