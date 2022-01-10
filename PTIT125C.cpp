#include <bits/stdc++.h>
using namespace std;
 
struct Data
{
    int close, open;
    Data(int c, int o)
    {
        close = c;
        open = o;
    }
    Data()
    {
        close = 0;
        open = 0;
    }
};
 
int n, k, a, b;
Data arr[1000006];
vector<int> res;
void init()
{
    cin >> n >> k;
    for (int i = 0; i < k; i++)
    {
        cin >> a >> b;
        arr[a].open++;
        arr[b].close++;
    }
}
 
void process()
{
    int tmp = 0;
    for (int i = 1; i <= n; i++)
    {
        tmp += arr[i].open;
        res.push_back(tmp);
        tmp -= arr[i].close;
    }
    sort(res.begin(), res.end());
    cout << res[n / 2];
}
int main()
{
    init();
    process();
} 
