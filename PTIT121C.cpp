#include <bits/stdc++.h>
using namespace std;
 
vector<string> s;
string a, b;
int n;
 
void xoa_sao() {
    string tmp;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != '*') {
            tmp += a[i];
        }
    }
    a = tmp;
}
 
int main() {
    cin >> a >> n;
    int tick;
    if (a[a.size() - 1] == '*') {
        tick = 1;
    }
    else tick = 0;
    xoa_sao();
    for (int i = 0; i < n; i++) {
        cin >> b;
        int k = 0;
        for (int j = 0; j < b.size(); j++) {
            if (b[j] == a[k]) {
                k++;
            }
        }
        if (k >= a.size() && tick == 1) {
            s.push_back(b);
        }
        if (tick == 0 && k >= a.size() && b[b.size() - 1] == a[a.size() - 1]) {
            s.push_back(b);
        }
    }
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << endl;
    }
} 
