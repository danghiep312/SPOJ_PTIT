#include <bits/stdc++.h>
typedef long long ll;
 
int n, k, a[100], stop;
void init()
{
    for (int i = 1; i <= k; i++)
        a[i] = i;
}
 
void display()
{
    for (int i = 1; i <= k; i++)
    {
        printf("%d", a[i]);
    }
    printf(" ");
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
    scanf("%d%d", &n, &k);
    init();
    stop = 1;
    while (stop)
    {
        display();
        sinh();
    }
    printf("\n");
}
 
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        process();
    }
} 
