#include <stdio.h>
#include <math.h>
 
long long sumDiv (long long n, long long b[]) {
    long long sum = 0;
    for (int i = 0; i < 223; i++) {
        if (b[i] > sqrt(n)) break;
        while (n % b[i] == 0) {
            sum += (long long) b[i];
            n /= b[i];
        }
    }
    return n == 1 ? sum :  sum + n;
}
 
int main() {
    int a[1500] = {0};
    long long b[223], k = 0;
    a[0] = 1;
    a[1] = 1;
    for (long long i = 2; i <= 1410; i++) {
        if (a[i] == 0) {
            b[k++] = i;
            for (int j = i*i; j <= 1410; j += i) {
                a[j] = 1;
            }
        }
    }
 
    long long sum = 0;
    int t;
    scanf ("%d", &t);
    while (t--) {
        long long n;
        scanf ("%lld", &n);
        sum += sumDiv(n, b);
    }   
    printf ("%lld", sum);
} 
