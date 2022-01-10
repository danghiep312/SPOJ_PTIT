#include <bits/stdc++.h>
using namespace std;
 
string a;
int countR = 0;
 
void init() {
    cin >> a;
    for (int i = 0; i < a.size() - 1; i++) {
        if (a[i] == ')' && a[i + 1] == ')') {
            countR++;
        }
    }
}
 
void process() {
    int i = 0, count = 0;
    while (countR > 0 && i != a.size() - 1) {
        if(a[i] == ')' && a[i + 1] == ')') {
            countR--;
        }
        else if (a[i] == '(' && a[i + 1] == '(') {
            count += countR;
        }
        i++;
    }
    cout << count;
}
 
int main() {
    init();
    process();
} 
