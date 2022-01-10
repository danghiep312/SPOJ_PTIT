#include <stdio.h>
#include <string.h>
#include <math.h>
char a[100000], b[100000];
 
void strrev() {
    int k = 0;
    for (int i = strlen(a) - 1; i >= 0; i--) {
        b[k++] = a[i];
    }
    b[k] = '\0';
}
 
int strBal() {
    for (int i = 1; i < strlen(a); i++) {
        if (abs(a[i] - a[i - 1]) != abs(b[i] - b[i - 1])) {
            return 0;
        }
    }
    return 1;
}
 
int main() {
    int t;
    scanf ("%d", &t);
    while (t--) {
        scanf("%s", a);
        strrev();
        if (strBal() == 1) {
            printf ("YES\n");
        }
        else {
            printf ("NO\n");
        }
    }
} 
