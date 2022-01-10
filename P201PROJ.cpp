#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll a;
string b;
 
void init()
{
    cin >> a >> b;
}
 
void process()
{
    int tmp = b.size() - 1;
    cout << a * tmp;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        process();
        cout << endl;
    }
} 
