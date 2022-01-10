#include <bits/stdc++.h>
 
using namespace std;
 
vector<long long> a;
 
void init() {
    a.push_back(0);
    a.push_back(1);
    for (int i = 2; i < 1003; i++) {
        long long tmp = (a[i - 2] + a[i - 1]) % 1000000007;
        a.push_back(tmp);
    }
}
 
void process() {
    int n;
    cin >> n;
    cout << a[n] << endl;
}
 
int main() {
    init();
    int t;
    cin >> t;
    while(t--) {
        process();
    }
} 
