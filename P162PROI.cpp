#include <bits/stdc++.h>
using namespace std;
 
string a;
void process() {
    cin >> a;
    if (a[0] != '-'){
        cout << a;
    }
    else {
        if (a[a.size() - 1] > a[a.size() - 2]) {
            a.erase(a.size() - 1, 1);
        }
        else {
            a.erase(a.size() - 2, 1);
        }
        if (a[1] == '0') {
            cout << 0;
        }
        else cout << a;
    }
}
int main() {
    process();
} 
