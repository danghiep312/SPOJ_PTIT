#include <bits/stdc++.h>
using namespace std;
 
string result(string a, string b) {
    while (a.size() < b.size()) a = '0' + a;
    while (b.size() < a.size()) b = '0' + b;
 
    if (a < b) {
        swap(a, b);
    }
 
    int nho = 0;
    string res;
    for (int i = a.size() - 1; i >= 0; i--) {
        int tmp = a[i] - b[i] - nho;
        if (tmp < 0) {
            tmp += 10;
            nho = 1;
        }
        else {
            nho = 0;
        }
        res = (char) (tmp % 10 + 48) + res;
    }
    return res;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        string a, b;
        cin >> a >> b;
        cout << result(a, b) << endl;
    }
} 
