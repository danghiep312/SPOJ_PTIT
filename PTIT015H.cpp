#include <bits/stdc++.h>
using namespace std;
 
string convert(int n) {
    string tmp;
    while (n > 0) {
        tmp = (char) (n % 10 + 48) + tmp;
        n /= 10;
    }
    return tmp;
}
 
void process() {
    int n;
    cin >> n;
    string a;
    for (int i = 1; i <= n; i++) {
        a += convert(i);
    }
    //cout << a;
    string tmp;
    bool tick = false;
    while (a.size() != 1) {
        tmp.clear();
        if (tick) {
            for (int i = 0; i < a.size(); i++) {
                if (i % 2 != 0) {
                    tmp += a[i];
                }
            }
            tick = false;
            a = tmp;
        }
        else {
            for (int i = 0; i < a.size(); i++) {
                if (i % 2 == 0) {
                    tmp += a[i];
                }
            }
            tick = true;
            a = tmp;
        }
    }
    cout << a;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        process();
        cout << endl;
    }
} 
