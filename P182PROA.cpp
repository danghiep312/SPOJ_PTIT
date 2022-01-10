#include <bits/stdc++.h>
using namespace std;
 
int c, v, v1, a, l;
 
void process() {
    int page = 0, count = 0;
    while (1) {
        count++;
        page += v;
        if (page >= c) {
            cout << count;
            return;
        }
        if (v + a < v1) {
            v += a;
        }
        else {
            v = v1;
        }
        page -= l;
    }
}
 
int main() {
    cin >> c >> v >> v1 >> a >> l;
    process();
} 
