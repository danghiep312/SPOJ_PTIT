#include <stdio.h>
 
int main() {
    int t;
    scanf ("%d", &t);
    int minU = 100000;
    int minD = 100000;
    int sumU = 0;
    int sumD = 0;
    while (t--) {
        int a, b;
        scanf ("%d%d", &a, &b); 
        sumU += a;
        sumD += b;
        minU = a < minU ? a : minU;
        minD = b < minD ? b : minD;
    }
    sumU += minD;
    sumD += minU;
    
    if (sumD > sumU) {
        printf ("%d", sumD);
    }
    else {
        printf ("%d", sumU);
    }
} 
