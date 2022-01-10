#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef double db;
 
bool checkTri (ll n) {
    db x = (double) (-1 + sqrt(8*n + 1))/2;
    db y = (double) (-1 - sqrt(8*n + 1))/2;
    ll x1 = x;
    ll y1 = y;
    //cout << x1 << " " << y1 << " " << x << " " << y;
    if (x1 == x && y1 == y) return true;
    return false;
}
 
vector<ll> a;
ll n;
void init() { 
    cin >> n;
    int i = 1;
    while ((i*i + i)/2 < n) {
        a.push_back((i*i + i)/2);
        i++;
    }
}
 
void process() {
    int j = 0;
    for (int i = 0; i < a.size(); i++) {
        if (checkTri(n - a[i])) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}
 
int main() {
    init();
    process();   
} 
