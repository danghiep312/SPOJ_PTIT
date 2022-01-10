#include <stdio.h>
#include <math.h>
 
int main() {
    long long a[100];
    a[0] = 0;
    a[1] = 1;
    for (int i = 2; i < 93; i++) {
        a[i] = a[i - 2] + a[i - 1];
    }
    int T;
    T = 1;
    for (int t = 0; t < T; t++) {
        int n;
        scanf ("%d", &n);
        printf ("%lld\n", a[n]);
    }
} 
