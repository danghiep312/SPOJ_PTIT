#include <bits/stdc++.h>
 
using namespace std;
 
vector<string> a;
void khoi_tao() {
    string tmp1 = "{}";
    a.push_back(tmp1);
    string tmp2 = "{{}}";
    a.push_back(tmp2);
    for (int i = 2; i <= 15; i++) {
        string tmp;
        tmp = "{";
        for (int j = 0; j < i; j++) {
            tmp += a[j];
            if(j != i - 1) tmp += ",";
        }
        tmp += "}";
        a.push_back(tmp);
    }
}
 
int main() {
    khoi_tao();
    string c, b;
    int index1, index2;
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        cin >> c >> b;
        for (int i = 0; i < 16; i++) {
            if (c.size() == a[i].size()) index1 = i;
            if (b.size() == a[i].size()) index2 = i;
        }
        cout << a[index1 + index2] << endl;
    }
} 
