#include <stdio.h>
#include <math.h>
 
long long sqrNum (long long n) {
    long long k = sqrt(n);
    if (k * k == n) return k;
    return 0;
}
 
void swap (long long &x, long long &y) {
    long long tmp = x;
    x = y;
    y = tmp;
}
 
int main() {
    long long x1, y1, x2, y2, x3, y3;
    scanf ("%lld%lld%lld%lld%lld%lld", &x1, &y1, &x2, &y2, &x3, &y3);   
 
    long long x = x1*y1 + x2*y2 + x3*y3;
    long long y = sqrNum(x);
 
    if (y == 0) {
        printf ("0");
    }
    else {
        if (x1 > y1) {
            swap (x1, y1);
        }
        if (x2 > y2) {
            swap (x2, y2);
        }
        if (x3 > y3) {
            swap (x3, y3);
        }
        if (y1 == y2 && y2 == y3 && y3 == y) {
            printf ("%lld", y);
        }
        else {
            if (y2 == y) {
                swap (x1, x2);
                swap (y1, y2);
            }
            if (y3 == y) {
                swap (x1, x3);
                swap (y1, y3);
            }
            if (y1 == y) {
                x1 = y - x1;
                if ((x2 == x1 && x3 == x1) || (y2 == x1 && x3 == x1) || (x2 == x1 && y3 == x1) || (y2 == x1 && y3 == x1)) {
                    printf ("%lld", y);
                }
                else {
                    printf ("0");
                }
            }
            else {
                printf ("0");
            }
        }
    }
} 
