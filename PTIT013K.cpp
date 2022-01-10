#include <bits/stdc++.h>
using namespace std;
 
vector<int> f(11);
int t;
 
void initFac() {
    f[0] = 1;
    f[1] = 1;
    for (int i = 2; i < 11; i++) {
        f[i] = f[i - 1] * i;
    }
}
 
long long convert(string a) {
    long long sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum += (a[i] - 48) * f[a.size() - i];
    }
    return sum;
}
 
void process() {
    string a;
    cin >> a;
    cout << convert(a) << endl;
}
 
int main() {
    initFac();
    cin >> t;
    while(t--) {
        process();
    }
} 
