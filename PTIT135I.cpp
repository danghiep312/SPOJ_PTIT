#include <bits/stdc++.h>
using namespace std;
 
int t;
string a;
 
void run() {
    cin >> a;
    vector<int> c;
    vector<int> b;
    c.push_back(a[0] - 48);
    b.push_back(1);
    
    for (int i = 1; i < a.size(); i++) {
        if (a[i - 1] == a[i]) {
            b[b.size() - 1]++;
        }
        else {
            c.push_back(a[i] - 48);
            b.push_back(1);
        }
    }
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << c[i];
    }
    cout << endl;
}
 
int main() {
    cin >> t;
    while (t--) {
        run();
    }
} 
