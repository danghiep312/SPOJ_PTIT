#include <bits/stdc++.h>
using namespace std;
 
int n, a, b;
vector<int> x;
void init()
{
    cin >> n >> a >> b;
    b *= 2;
    x.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
}
 
void process()
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == 1)
        {
            if (a >= 1)
            {
                a -= 1;
            }
            else if (b >= 1)
            {
                b -= 1;
            }
            else
                sum++;
        }
        if (x[i] == 2)
        {
            if (b >= 2)
            {
                b -= 2;
            }
            else
                sum += 2;
        }
    }
    cout << sum;
}
 
int main()
{
    init();
    process();
} 
