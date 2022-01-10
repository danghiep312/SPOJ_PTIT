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
 
void solve()
{
    ll n;
    cin >> n;
    vll a(n);
    for (ll &x : a)
        cin >> x;
 
    stack<ll> st;
    vll l(n), r(n);
 
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() && a[st.top()] >= a[i])
            st.pop();
 
        l[i] = st.empty() ? 0 : st.top() + 1;
        st.push(i);
    }
 
    while (!st.empty())
        st.pop();
 
    for (int i = n - 1; i >= 0; i--)
    {
        while (!st.empty() && a[st.top()] >= a[i])
            st.pop();
 
        r[i] = st.empty() ? n - 1 : st.top() - 1;
        st.push(i);
    }
    ll res = 0;
    for (int i = 0; i < n; i++)
    {
        //cout << l[i] << " " << r[i] << endl;
 
        res = max(res, (r[i] - l[i] + 1) * a[i]);
    }
    cout << res;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << endl;
    }
} 
