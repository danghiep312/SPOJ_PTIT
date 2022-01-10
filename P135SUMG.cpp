#include <bits/stdc++.h>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define endl '\n'
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
using namespace std;
typedef double db;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const ll MOD = 1e9 + 7;
const long long o = 2 * 1e5 + 1;
 
string s;
int a[200], b[200];// a de luu trang thai ban dau, b de luu trang thai khi sinh
ll res = 0, n = 0;
string x;
void init()
{
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '_')
        {
            a[i] = -1;
            n++;
        }
        else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            a[i] = 0;
        else if (s[i] == 'L')
            a[i] = 2;
        else
            a[i] = 1;
        b[i] = a[i];
    }
}
 
void update() {
    int j = 0;
    bool flag = false;
    for (int i = 0; i < s.size(); i++) {
        if (a[i] == -1) {
            b[i] = x[j] - 48;
            j++;
        }
        if (b[i] == 2) flag = true;
    }
    ll sum = 1;
    if (flag) {
        for (int i = 0; i < s.size() - 2; i++) {
            if (b[i] == b[i + 1] && b[i + 1] == b[i + 2]) return;
            if (b[i] > 0 && b[i + 1] > 0 && b[i + 2] > 0) return;
        }
        for (int i = 0; i < s.size(); i++) {
            if (a[i] == -1) {
                if (b[i] == 0) sum *= 5;
                if (b[i] == 1) sum *= 20;
            }
        }
        res += sum;
    }
}
 
void Try(int i) {
    if (i == n) update();
    else {
        x += "0"; // neu '_' la 0 la nguyen am
        Try(i + 1);
        x.erase(x.end() - 1, x.end());
        x += "1"; // neu la 1 la chu L
        Try(i + 1);
        x.erase(x.end() - 1, x.end());
        x += "2"; // neu la 2
        Try(i + 1);
        x.erase(x.end() - 1, x.end());
    }
}
//0 la nguyen am 1 la L 2 la phu am
int main() {
    init();
    Try(0);
    cout << res;
} 
