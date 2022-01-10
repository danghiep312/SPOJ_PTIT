#include <bits/stdc++.h>
using namespace std;
 
vector<int> dA(26);
vector<int> dB(26);
string a, b;
 
void init() {
    for (int i = 0; i < 26; i++) {
        dA[i] = 0;
        dB[i] = 0;
    }
}
 
bool check() {
    for (int i = 0; i < 26; i++) {
        if (dA[i] != dB[i]) return false;
    }
    return true;
}
 
int main() {
    for (int i = 1; ; i++) {
        init();
        cin >> a >> b;
        if (a == "END" && b == "END") return 0;
        for (int i = 0; i < a.size(); i++) {
            dA[a[i] - 97]++;
        }
        for (int i = 0; i < b.size(); i++) {
            dB[b[i] - 97]++;
        }
        // for (int i = 0; i < 26; i++) {
        //     cout << dA[i] << " ";
        // }
        // cout << endl;
        // for (int i = 0; i < 26; i++) {
        //     cout << dB[i] << " ";
        // }
        cout << "Case " << i << ": ";
        if (check()) cout << "same" << endl;
        else cout << "different" << endl;
    }
} 
