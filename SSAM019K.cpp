#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll sumNum(ll n) {
    ll sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
ll x;
 
bool checkNum(ll n) {
    ll tmp = n;
    ll sum = 0;
    for (int i = 2; i <= sqrt(n); i++) {
        while(n % i == 0) {
            sum += sumNum(i);
            n /= i;
        }
    }
    if (n > 1) sum += sumNum(n);
    if (sum == sumNum(tmp)) return true;
    return false;
}
 
void process() {
    cin >> x;
    if (checkNum(x)) cout << "YES";
    else cout << "NO";
}
 
int main() {
    process();
} 
