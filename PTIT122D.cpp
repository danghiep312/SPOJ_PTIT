#include <bits/stdc++.h>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define endl '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef double db;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const ll MOD = 1e9 + 7;
const long long o = 2*1e5 + 1;
 
int var[126], phu[126], dd[126];
string s;
 
void init() {
    int count = 1;
    for (int i = 97; i < 123; i++) {
        var[i] = count;
        count++;
        phu[i] = 0;
        dd[i] = 0;
    }
}
 
void solve() {
    string s;
    cin >> s;
    cout << "Expression: " << s << endl;
    init();
    bool check = true;
    int n = s.size();
    while (1) {
        if (!check) break;
        check = false;
        for (int i = 0; i < n - 1; i++) {
            string tmp;
            for (int j = i; j < i + 2; j++) {
                tmp += s[j];
            }
            if (tmp == "++") {
                if (i >= 1 && s[i - 1] >= 'a' && s[i - 1] <= 'z') {
                    phu[s[i - 1]]++;
                }
                else if (i + 2 <= n - 1 && s[i + 2] >= 'a' && s[i + 2] <= 'z') {
                    var[s[i + 2]]++;
                }
                s.erase(i, 2);
                check = true;
                n -= 2;
                break;
            }
            else if (tmp == "--") {
                if (i >= 1 && s[i - 1] >= 'a' && s[i - 1] <= 'z') {
                    phu[s[i - 1]]--;
                }
                else if (i + 2 <= n - 1 && s[i + 2] >= 'a' && s[i + 2] <= 'z') {
                    var[s[i + 2]]--;
                }
                s.erase(i, 2);
                check = true;
                n -= 2;
                break;
            }
        }
    }
    int res = 0;
    if (s[0] <= 'z' && s[0] >= 'a') {
        res += var[s[0]];
        dd[s[0]] = 1;
        for (int i = 1; i < n; i++) {
            string tmp;
            for (int j = i; j < i + 2; j++) {
                tmp += s[j];
            }
            if (tmp[0] == '+') {
                res += var[tmp[1]];
                dd[tmp[1]] = 1;
            }
            else if (tmp[0] == '-') {
                res -= var[tmp[1]];
                dd[tmp[1]] = 1;
            }
        }
    }
    else {
        for (int i = 0; i < n; i++) {
            string tmp;
            for (int j = i; j < i + 2; j++) {
                if (tmp[0] == '+') {
                    res += var[tmp[1]];
                    dd[tmp[1]] = 1;
                }
                else if (tmp[0] == '-') {
                    res -= var[tmp[1]];
                    dd[tmp[1]] = 1;
                }
            }
        }
    }
    cout << "value = " << res << endl;
    for (int i = 97; i <= 122; i++) {
        if (dd[i] == 1) {
            cout << (char) i << " = " << var[i] + phu[i] << endl;
        }
    }                                                              
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
} 
