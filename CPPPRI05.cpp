#include <bits/stdc++.h>
using namespace std;
 
vector<int> a(1e6, 0);
 
void snt() {
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i*i <= 1e6; i++) {
        if (a[i] == 0) {
            for (int j = i*i; j <= 1e6; j += i) {
                a[j] = 1;
            }
        }
    }
}
 
void run(int c, int b) {
    for (int i = c; i <= b; i++) {
        if (a[i] == 0) {
            cout << i << " ";
        }
    }
}
 
int main() {
    snt();
    int t;
    cin >> t;
    while(t--) {
        int x, y;
        cin >> x >> y;
        run(x,y);
        cout << endl;
    }
} 
