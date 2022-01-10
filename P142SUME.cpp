#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
 
int n, k, a[100], stop, s, res;
void init()
{
    for (int i = 1; i <= k; i++)
        a[i] = i;
}
 
void check()
{
    int sum = 0;
    for (int i = 1; i <= k; i++)
    {
        sum += a[i];   
    }
    if (sum == s) res++;
}
 
void sinh()
{ 
    int i = k;
    while (i > 0 && a[i] == n - (k - i))
        i--;
    if (i == 0)
        stop = 0;
    else
    {
        a[i]++;
        int tmp = a[i];
        while (i <= k)
        {
            a[i++] = tmp++;
        }
    }
}
 
void process()
{
    init();
    res = 0;
    stop = 1;
    while (stop)
    {
        check();
        sinh();
    }
    printf("%d\n", res);
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    // int t;
    // scanf("%d", &t);
    while (1)
    {
        scanf("%d%d%d", &n, &k, &s);
        if (n == 0 && k == 0 && s == 0) return 0;
        if (k > n) k = n;
        process();
    }
} 
