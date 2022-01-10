#include <bits/stdc++.h>
using namespace std;
 
struct Data {
    string name;
    int index;
};
 
int n;
vector<Data> a;
 
void init() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].name;
        a[i].index = i + 1;
    }
}
 
bool cmp (Data x, Data y) {
    if (x.name == y.name) return x.index < y.index;
    return x.name < y.name;
}
 
void process() {
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < n; i++) {
        cout << a[i].index << " ";
    }
}
 
int main() {
    init();
    process();
} 
