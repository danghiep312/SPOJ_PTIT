#include <bits/stdc++.h>
using namespace std;
 
vector<string> a;
int n;
 
 
bool cmp (string &a, string &b) {
    while (a.size() < b.size()) a = '0' + a;
    while (b.size() < a.size()) b = '0' + b;
    return a < b;
}
 
void process() {
    sort(a.begin(), a.end(), cmp);
    if (a[0] == a[a.size() - 1]) cout << "There is a row of trees having equal height.";
    else {
        int i = 0, k = 0;
        while (a[n - 1][i] == '0') {
            i++;
        }
        while (a[0][k] == '0') {
            k++;
        }
        for (int j = k; j < a[0].size(); j++) {
            cout << a[0][j];
        }
        cout << " ";
        for (int j = i; j < a[n - 1].size(); j++) {
            cout << a[n - 1][j];
        }
    }
    cout << endl;
}
 
int main() {
    for (int t = 1; ;t++) {
        cin >> n;
        if (n == 0) return 0;
        a.resize(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << "Case " << t << ": ";
        process();
    }
} 
