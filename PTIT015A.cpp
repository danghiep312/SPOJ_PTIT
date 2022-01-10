#include <bits/stdc++.h>
using namespace std;
 
vector<int> dd(10, 0);
 
void reset() {
    for (int i = 0; i < 10; i++) {
        dd[i] = 0;
    }
}
 
void init() {
    string a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i < a.size(); i++) {
        dd[a[i] - 48]++;
    }
    for (int i = 0; i < b.size(); i++) {
        dd[b[i] - 48]++;
    }
    for (int i = 0; i < c.size(); i++) {
        dd[c[i] - 48]++;
    }
}
    
 
void process() {
    for (int i = 9; i >= 0; i--) {
        for (int j = 0; j < dd[i]; j++) {
            cout << i;
        }
    }
    reset();
    cout << endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        init();
        process();
    }
} 
