#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
ll n, m;
void init() {
    cin >> n >> m;
}
 
void process() {
    ll len = n/2;
    if (n % 2 != 0) {
        len++;
    }
    while (len % m != 0) {
        len++;
    }
    cout << len;
}
 
int main() {
    init();
    process();
} 
