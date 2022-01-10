#include <bits/stdc++.h>
using namespace std;
 
string a;
stack <int> s;
 
void run() {
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == '(') {
            s.push(0);
        }
        else if (a[i] == ')') {
            int tmp = 0;
            while (!s.empty() && s.top() != 0) {
                tmp += s.top();
                s.pop();
            }
            if (!s.empty() && s.top() == 0) {
                s.pop();
                s.push(tmp);
            }
        }
        else if (a[i] >= '0' && a[i] <= '9') {
            int num = a[i] - '0';
            int tmp;
            if (!s.empty()) {
                tmp = s.top();
                s.pop();
                tmp *= num;
            }
            s.push(tmp);
        }
        else if (a[i] == 'C') {
            s.push(12);
        }
        else if (a[i] == 'O') {
            s.push(16);
        }
        else if (a[i] == 'H') {
            s.push(1);
        }
    }
    int sum = 0;
    while (!s.empty()) {
        sum += s.top();
        s.pop();
    }
    cout << sum;
}
 
int main() {
    run();
} 
