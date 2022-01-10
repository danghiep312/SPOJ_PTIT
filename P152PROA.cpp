#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll n;
bool isPrime(ll n)
{
	if (n < 2) return false;
	for (int i = 2; i * i <= n; i++)
	{
		if (n % i == 0) return false;
	}
	return true;
}
 
void process() {
    cin >> n;
    ll count = 0;
    for (ll i = 1; i <= n; i++) {
        if (__gcd(i, n) == 1) {
            count++;
        }
    }
    if (isPrime(count)) {
        cout << 1 << endl;
    }
    else cout << 0 << endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        process();
    }
} 
