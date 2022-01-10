#include <bits/stdc++.h>
using namespace std;
 
stack<int> c, d, e;
 
int main() {
    int a, b, sum = 0;
    cin >> a >> b;
    int tmp = a + b;
    while (a > 0) {
        c.push(a % 10);
        if (c.top() == 0) c.pop();
        a /= 10;
    }
    while (!c.empty()) {
        sum = sum*10 + c.top();
        c.pop();
    }
    a = sum;
    sum = 0;
    while (b > 0) {
        d.push(b % 10);
        if (d.top() == 0) d.pop();
        b /= 10;
    }
    while (!d.empty()) {
        sum = sum*10 + d.top();
        d.pop();
    }
    b = sum;
    sum = 0;
    while (tmp > 0) {
        e.push(tmp % 10);
        if (e.top() == 0) e.pop();
        tmp /= 10;
    }
    while (!e.empty()) {
        sum = sum*10 + e.top();
        e.pop();
    }
    tmp = sum;
    
    if (a + b == tmp) cout << "YES";
    else {
        cout << "NO";
    }
} 
