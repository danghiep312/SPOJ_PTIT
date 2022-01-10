#include <bits/stdc++.h>
#include <string>
using namespace std;
 
int mu(int n) {
    int res = 1;
    for (int i = 0; i < n; i++) {
        res *= 2;
    }
    return res;
}
 
int main() {
    string a;
    cin >> a;
    if (a.size() % 3 != 0) {
        for (int i = 0; i < a.size() % 3; i++) {
            a = '0' + a;
        }
    }
    int k = 2, sum = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '1') {
            sum += mu(k--);
        }
        else k--;
        if (k < 0) {
            cout << sum;
            sum = 0;
            k = 2;
        }
    }
}
 
