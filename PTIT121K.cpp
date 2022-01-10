#include <bits/stdc++.h>
using namespace std;
 
int n, a[102][102];
string s;
string f[102][102];
void init() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
}
 
string maxLine() {
    for (int i = 1; i <= n; i++) {
        f[0][i] = "";
        f[i][0] = "";
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            char tmp = (a[i][j] + '0');
            f[i][j] = max(f[i - 1][j], f[i][j - 1]) + tmp;
        }
    }
    return f[n][n];
}
 
string biToHex (string x) {
    string res;
    while (x.size() % 4 != 0) {
        x = '0' + x;
    }
    int tmp = 0, k = 3;
    for (int i = 0; i < x.size(); i++) {
        if (x[i] == '1') {
            tmp += pow(2, k);
        }
        k--;
        if (k == -1) {
            k = 3;
        }
        if ((i + 1) % 4 == 0) {
            if (tmp >= 10) {
                res += (char) (tmp + 55);
            }
            else {
                res += (char) (tmp + 48);
            }
            tmp = 0;
        }
    }
 
    if (res == "") return "0";
    else {
        while (1) {
            if (res.size() - 1 == 0 || res[0] != '0') break;
            res.erase(res.begin(), res.begin()+1);
        }
    }
    return res;
}
 
int main() {
    init();
    cout << biToHex(maxLine());
} 
