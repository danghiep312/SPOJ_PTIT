#include <bits/stdc++.h>
using namespace std;
 
string s;
int n;
 
string numToString (int a) {
    stack<char> s;
    while (a > 0) {
        s.push(a % 10 + 48);
        a /= 10;
    }
    string tmp;
    while (!s.empty()) {
        tmp += s.top();
        s.pop();
    }
    return tmp;
}
 
void process() {
    cin >> n;
    int i = 1;
    while(s.size() < n) {
        s += numToString(i);
        i++;
    }
    cout << s[n - 1];
}
 
int main() {
    process();
} 
