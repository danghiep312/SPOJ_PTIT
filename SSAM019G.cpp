#include <bits/stdc++.h>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define endl '\n'
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
using namespace std;
typedef double db;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const ll MOD = 1e9 + 7;
 
ll n, k;
vll a;
vector<string> b;
 
void init() {
    a.push_back(0);
    a.push_back(1);
    //cout << 0 << " " << 1 << " ";
    for (int i = 2; i < 93; i++) {
        a.push_back(a[i - 2] + a[i - 1]);
        //cout << a[i] << " ";
    }
}
 
void process() {
    cin >> n >> k;
    while (n >= 3) {
        if (k > a[n - 2]) {
            k -= a[n - 2];
            n--;
        }
        else {
            n -= 2;
        }
    }
    //cout << n << " " << k;
    if (n == 1) cout << "A";
    if (n == 2) cout << "B";
}
 
int main() {
    faster();
    init();
    int t;
    cin >> t;
    while (t--) {
        process();
        cout << endl;
    }
} 
