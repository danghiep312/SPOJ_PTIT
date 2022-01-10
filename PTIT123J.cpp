#include<bits/stdc++.h>
using namespace std;
 
string s;
stack<int> a;
 
bool check(string s) {
    while (!a.empty()) {
        a.pop();
    }
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(') a.push(0);
        else if (s[i] == '[') a.push(1);
        else if (s[i] == ')') {
            if (!a.empty() && a.top() == 0) a.pop();
            else return 0;
        }
        else if (s[i] == ']') {
            if (!a.empty() && a.top() == 1) a.pop();
            else return 0;
        }
    }
    if (a.empty()) return 1;
    return 0;
}
 
int main() {
    while (getline(cin, s) && s != "."){
		if (check(s)) cout << "yes"; 
		else cout << "no";
		cout << endl;
	}
} 
