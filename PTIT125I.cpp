#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, k;
    cin >> n >> k;
    stack<int> s;
    for (int i = 0; i < n; i++) {
        char tmpChar;
        cin >> tmpChar;
        int tmpInt = tmpChar - '0';
        if (s.empty()) {
            s.push(tmpInt);
        }
        else {
            while(!s.empty() && tmpInt > s.top() && k > 0) {
                s.pop();
                k--;
            }
            s.push(tmpInt);
        }
    }
    while (k > 0) {
        k--;
        s.pop();
    }
    vector<int> biggest;
    while (!s.empty()) {
        int tmp = s.top();
        s.pop();
        biggest.push_back(tmp);
    }
    for (int i = biggest.size() - 1; i >= 0; i--) {
        cout << biggest[i];
    }
} 
