#include <bits/stdc++.h>
using namespace std;
 
struct Ship {
    int x, y;
};
 
Ship a;
int n, m, j;
vector<int> b;
 
void init() {
    cin >> n >> m;
    a.x = 1;
    a.y = m;
    cin >> j;
    b.resize(j);
    for (int i = 0; i < j; i++) {
        cin >> b[i];
    }
}
 
void process() {
    int count = 0;
    for (int i = 0; i < j; i++) {
        if (b[i] > a.y) {
            count += (b[i] - a.y);
            a.x += (b[i] - a.y);
            a.y = b[i];
        }
        if (b[i] < a.x) {
            count += (a.x - b[i]);
            a.y -= (a.x - b[i]);
            a.x = b[i];
        }
    }
    cout << count;
}
 
int main() {
    init();
    process();
} 
