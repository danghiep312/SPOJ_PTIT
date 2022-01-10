#include <bits/stdc++.h>
#define alphaa "abcdefghijklmnopqrstuvwxyz"
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define endl '\n'
#define faster()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
using namespace std;
typedef double db;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
const ll MOD = 1e9 + 7;
const long long o = 2 * 1e5 + 1;
 
struct data
{
    ll front, back, loop;
    data(ll x, ll y, ll z)
    {
        front = x;
        back = y;
        loop = z;
    }
};
 
queue<data> a;
 
void init()
{
    ll begin = 1, end = 5, k = 1, n;
    a.push(data(begin, end, k));
    while (end <= 1e9)
    {
        begin = end + 1;
        k *= 2;
        end = begin + k * 5 - 1;
        a.push(data(begin, end, k));
    }
}
 
void solve()
{
    ll n;
    cin >> n;
    while (!a.empty() && (n > a.front().back || n < a.front().front))
    {
        a.pop();
    }
    //cout << a.front().front << "  " << a.front().back << endl;
    ll stt = n - a.front().front + 1;
    ll tmp = a.front().loop;
    //cout << stt << " " << tmp << " ";
    stt = (stt - 1) / tmp;
    cout << stt + 1;
}
 
int main()
{
    init();
    solve();
} 
