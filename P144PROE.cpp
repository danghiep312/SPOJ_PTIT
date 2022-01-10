#include <bits/stdc++.h>
using namespace std;
 
struct Data {
    int p, q;
    Data(int x, int y) {
        p = x;
        q = y;
    }
};
 
int main() {
    vector<Data> v;
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    for (int i = a; i <= x; i++) {
        for (int j = b; j < i && j <= y; j++) {
            v.push_back(Data(i, j));
        }
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i].p << " " << v[i].q << endl;
    }
} 
