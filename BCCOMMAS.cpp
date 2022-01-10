#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string a;
    cin >> a;
    int count = 0;
    stack<char> s;
    for (int i = a.size() - 1; i >= 0; i--) {
        s.push(a[i]);
        count++;
        if (count % 3 == 0 && i != 0) {
            s.push(',');
        }   
    }
    while (!s.empty()) {
        cout << s.top();
        s.pop();
    }
} 
