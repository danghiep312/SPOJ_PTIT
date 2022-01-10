#include <stdio.h>
#include <string.h>
#include <math.h>
 
int dd[100001] = {0};
 
void process()
{
    int n, p, x;
    scanf ("%d%d", &n, &p);
    int count = 0;
    for (int i = 1; i <= n; i++) {
        int tmp = i;
        while (tmp % p == 0) {
            count++;
            tmp /= p;
        }
    }
    printf("%d\n", count);
}
 
int main()
{
    int t;
    scanf("%d", &t);
    //t = 1;
    while (t--)
    {
        process();
        //printf ("\n");
    }
} 
