#include <bits/stdc++.h>
using namespace std;
 
vector<int> a(26, 0);
 
void init() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        a[s[i] - 97]++;
    }
}
 
void process() {
    int count = 0;
    for (int i = 0; i < 26; i++) {
        if (a[i] != 0) count++;
    }
    if (count <= 2) {
        cout << 0;
    }
    else {
        int res = 0;
        sort(a.begin(), a.end());
        // for (int i = 0; i < 26; i++) {
        //     cout << a[i] << " ";
        // }
        int j = 0;
        while (a[j] == 0) j++;
 
        // for (int i = j; i < j + count + 2; i++) {
        //     cout << a[i] << " ";
        // }
        for (int i = j; i < j + count - 2; i++) {
            res += a[i];
        }
        cout << res;
    }
}
 
int main() {
    init();
    process();
} 
