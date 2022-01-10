#include <bits/stdc++.h>
using namespace std;
 
vector<int> a;
vector<int> b;
int n;
void init(){
    cin >> n;
    b.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
}
 
void process() {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        a.push_back(b[i]*(i + 1) - sum);
        sum += a[i];
        cout << a[i] << " ";
    }
}
 
int main() {
    init();
    process();
}
 
 
