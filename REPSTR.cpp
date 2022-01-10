#include <bits/stdc++.h>
using namespace std;
 
priority_queue<char, vector<char>> q;
string a, b;
 
void init() {
    cin >> a >> b;
    for (int i = 0; i < b.size(); i++) {
        q.push(b[i]);
    }
}
 
void process() {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] < q.top() && !q.empty()) {
            a[i] = q.top();
            q.pop();
        }
    }
    cout << a;
}
 
int main() {
    init();
    process();
} 
