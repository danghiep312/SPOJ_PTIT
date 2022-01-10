#include <bits/stdc++.h>
using namespace std;
 
bool cmp(int a, int b) {
    int n = 10, m = 10;
    while(a/n > 0) n *= 10;
    while(b/m > 0) m *= 10;
    return a*m + b > b*n + a;
}
 
vector<int> a;
 
void process() {
    int n;
    cin >> n;
    a.resize(n);    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i];
    }
    cout << endl;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        process();
    }
} 
