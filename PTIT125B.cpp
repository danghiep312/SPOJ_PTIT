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
const long long o = 2*1e5 + 1;
 
struct dat
{
    ll sum, sale;
};
 
bool cmp(dat x, dat y) {
    return x.sum < y.sum;
}
 
int main() {
    ll n, s;
    cin >> n >> s;
    vector<dat> cow;
    ll a, b;
    cow.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        cow[i].sum = a + b;
        cow[i].sale = a / 2;
    }
    sort (cow.begin(), cow.end(), cmp);
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (s >= cow[i].sum) {
            count ++;
            s -= cow[i].sum;
        }
        else {
            ll saleMax = cow[i].sale;
            for (int j = i; j >= 0; j--) 
                if (cow[i].sale > saleMax) saleMax = cow[i].sale;
            s += saleMax;
            if (s >= cow[i].sum) {
                count++;
                s -= cow[i].sum;
            }
            else break;
        }
    }
    cout << count;
} 
