#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
vector<ll> f(100);
int n;
void init() {
    f[0] = 0;
    f[1] = 1;
    for (int i = 2; i <= 95; i++) {
        f[i] = f[i - 1] + f[i - 2];
    }
}
 
void process() {
    cin >> n;
    cout << f[n];
}
 
int main() {
    init();
    int t;
    cin >> t;
    while(t--) {
        process();
        cout << endl;
    }
} 
