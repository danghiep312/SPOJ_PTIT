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
 
stack<int> a;
int n;
int main()
{
    string s;
    while (true)
    {
        cin >> s;
        if (s == "init")
        {
            while (!a.empty())
                a.pop();
        }
 
        if (s == "push")
        {
            cin >> n;
            a.push(n);
        }
        if (s == "pop") {
            if (!a.empty()) {
                a.pop();
            }
        }
        if (s == "top")
        {
            if (a.empty())
                cout << -1 << endl;
            else
                cout << a.top() << endl;
        }
        if (s == "size")
            cout << a.size() << endl;
        if (s == "empty")
        {
            if (a.empty())
                cout << 1 << endl;
            else
                cout << 0 << endl;
        }
        if (s == "end")
            break;
    }
} 
