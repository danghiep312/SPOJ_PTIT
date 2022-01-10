#include <bits/stdc++.h>
using namespace std;
 
vector<int> a(26, 0);
 
string s;
int n;
void run() {
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] <= 'z' && s[i] >= 'a') {
            a[s[i] - 97]++;
        }
        if (s[i] <= 'Z' && s[i] >= 'A') {
            a[s[i] - 65]++;
        }
    }
    for (int i = 0; i < 26; i++) {
        if (a[i] == 0) {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
}
 
int main() {
    run();
} 
