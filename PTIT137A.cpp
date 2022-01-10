#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int result(ll a, ll b, ll c, ll d) {
    int count = 0;
    while(1) {
        if (a == b && b == c && c == d) return count;
        ll tmp = a;
        a = abs(a - b);
        b = abs(b - c);
        c = abs(c - d);
        d = abs(d - tmp);
        count++;
    }
}
 
int main() {
    while(1) {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == 0 && b == 0 && c == 0 && d == 0) return 0;
        cout << result(a,b,c,d) << endl;
    }
} 
