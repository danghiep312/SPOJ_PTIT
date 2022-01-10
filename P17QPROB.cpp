#include <bits/stdc++.h>
using namespace std;
 
struct Data {
    string x;
};
 
int cmp (Data a, Data b) {
    if ((a.x + b.x) < (b.x + a.x)) return 1;
    else return 0;
}
 
int main() {
    int t;
    cin >> t;
    int m;
    Data res[15];
    while(t--) {
        cin >> m;
        for (int i = 0; i < m; i++) {
            cin >> res[i].x;
        }
        sort(res, res + m, cmp);
        for (int i = 0; i < m; i++) {
            cout << res[i].x;
        }
        cout << endl;
    }
} 
