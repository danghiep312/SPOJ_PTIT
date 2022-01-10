#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll a, n, b;
void init() {
    cin >> n >> a >> b;
}
 
void process() {
    int count = 0;
    for (int i = 0 ; i < n; i++) {
        if (i >= a && n - 1 - i <= b) {
            count++;
        }
    }
    cout << count;
}
 
int main() {
    init();
    process();
} 
