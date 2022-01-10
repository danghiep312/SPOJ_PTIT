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
 
string delSpace (string s) {
    string res;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ') res += s[i];
    }
    return res;
}
 
string del1(string s) {// (a) -> a , ((a + b)) -> (a + b)
    stack<char> x;
    stack<int> index;
    int dd[300] = {0};
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ')') {
            int flag = 1;
            while (x.top() != '(') {
                char top = x.top();
                if (top == '+' || top == '-') flag = 0;
                x.pop();
                index.pop();
            }
            if (flag) {
                dd[i] = 1;
                dd[index.top()] = 1;
            }
            x.pop();
            index.pop();
        }
        else {
            x.push(s[i]);
            index.push(i);
        }
    }
    string res;
    for (int i = 0; i < s.size(); i++) {
        if (dd[i] == 0) res += s[i];
    }
    return res;
}
 
string del2 (string s) { //((a+b)+c)->(a+b+c) || (a+(b-c))->(a+b-c)
    stack<char> x;
    stack<int> index;
    int dd[300] = {0};
    for (int i = s.size() - 1; i >= 0; i--) {
        if (s[i] == '(') {
            int flag = 1;
            if (i == 0 || s[i - 1] != '-') 
                flag = 0;
            while (x.top() != ')') {
                x.pop();
                index.pop();
            }
            if (flag == 0) {
                dd[index.top()] = 1;
                dd[i] = 1;
            }
            x.pop();
            index.pop();
        }
        else {
            index.push(i);
            x.push(s[i]);
        }
    }
    string res;
    for (int i = 0; i < s.size(); i++) {
        if (dd[i] == 0) res += s[i];
    }
    return res;
}
 
int main() {
    string s;
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        getline(cin, s);
        string tmp;
        tmp = delSpace(s);
        s = tmp;
        tmp = del1(s);
        s = tmp;
        tmp = del2(s);
        s = tmp;
        cout << s << endl;
    }
} 
