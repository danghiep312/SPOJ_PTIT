#include <bits/stdc++.h>
using namespace std;
 
struct Time
{
    int arr, lea;
};
 
int a, b, c;
vector<int> dd(200, 0);
vector<Time> d(3);
 
void init()
{
    cin >> a >> b >> c;
    for (int i = 0; i < 3; i++)
    {
        cin >> d[i].arr >> d[i].lea;
        for (int j = d[i].arr; j < d[i].lea; j++)
        {
            dd[j]++;
        }
    }
}
 
void process()
{
    int res = 0;
    for (int i = 0; i < 200; i++)
    {
        if (dd[i] == 1)
            res += a;
        if (dd[i] == 2)
            res += (b * 2);
        if (dd[i] == 3)
            res += (c * 3);
    }
    cout << res;
}
 
int main()
{
    init();
    process();
} 
