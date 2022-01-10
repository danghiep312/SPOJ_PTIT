#include <bits/stdc++.h>
using namespace std;
 
struct Data {
    char c;
    int index;
};
 
bool cmp(Data a, Data b) {
    if (a.c > b.c) return true;
    if (a.c == b.c) {
        if (a.index < b.index) return true;
    }    
    return false;
}
 
int main() {
    string s;
    cin >> s;
    vector<Data> ds;
    for (int i = 0; i < s.size(); i++) {
        Data tmp;
        tmp.c = s[i];
        tmp.index = i;
        ds.push_back(tmp);
    }
    sort(ds.begin(), ds.end(), cmp);
    int max = -1;
    for (int i = 0; i < ds.size(); i++) {
        if (ds[i].index > max) {
            max = ds[i].index;
            cout << ds[i].c;
        }
    }
} 
