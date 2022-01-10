#include <bits/stdc++.h>
using namespace std;
 
void chuan_hoa(string &a) {
    if (a[0] <= 'z' && a[0] >= 'a') {
        a[0] -= 32;
    }
    for (int i = 1; i < a.size(); i++) {
        if (a[i] <= 'Z' && a[i] >= 'A') {
            a[i] += 32;
        }
    }
}
 
void process() {
    string a;
    getline(cin, a);
    vector<int> tmp;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == ' ') {
            tmp.push_back(i);
        }
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == ' ') {
            a.erase(i, 1);
        }
    }
 
    a += a[0];
    a += "ee";
    a.erase(0, 1);
    
    for (int i = 0; i < tmp.size(); i++) {
        a.insert(tmp[i], " ");
    }
    chuan_hoa(a);
    cout << a << endl;
}
 
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        process();
    }
} 
