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
 
int main()
{
    queue<int> a;
    int n, choice, num;
    cin >> n;
    while (n--)
    {
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << a.size() << endl;
            break;
        case 2:
            a.empty() ? cout << "YES" : cout << "NO";
            cout << endl;
            break;
        case 3:
            cin >> num;
            a.push(num);
            break;
        case 4:
            if (!a.empty())
                a.pop();
            break;
        case 5:
            if (a.empty()) {
                cout << -1;
            }
            else {
                cout << a.front();
            }
            cout << endl;
            break;
        case 6:
            if (a.empty()) {
                cout << -1;
            }
            else cout << a.back();
            cout << endl;
            break;
        }
    }
} 
