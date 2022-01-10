#include <bits/stdc++.h>
using namespace std;
 
string a;
 
void process() {
    cin >> a;
    if (a[0] != '1') {
        cout << "NO";
        return;
    }
    for (int i = 1; i < a.size(); i++) {
        if (a[i] != '4' && a[i] != '1') {
            cout << "NO";
            return;
        }
        if (a[i] == '4' && i < a.size() - 2) {
            if (a[i + 1] == '4' && a[i + 2] == '4') {
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
}
 
int main() {
    //init();
    process();
} 
