#include <stdio.h>
#include <string.h>
char a[100], b[100];
void strupr (){
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] -= 32;
        }
    }
}
 
void convert() {
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] == 65 || a[i] == 66 || a[i] == 67)     b[i] = '2';
        if (a[i] == 68 || a[i] == 69 || a[i] == 70)     b[i] = '3';
        if (a[i] == 71 || a[i] == 72 || a[i] == 73)     b[i] = '4';
        if (a[i] == 74 || a[i] == 75 || a[i] == 76)     b[i] = '5';
        if (a[i] == 77 || a[i] == 78 || a[i] == 79)     b[i] = '6';
        if (a[i] == 80 || a[i] == 81 || a[i] == 82 || a[i] == 83)   b[i] = '7';
        if (a[i] == 84 || a[i] == 85 || a[i] == 86)     b[i] = '8';
        if (a[i] == 87 || a[i] == 88 || a[i] == 89 || a[i] == 90) b[i] = '9';
    }
    b[strlen(a)] = '\0';
}
 
int thuan_nghich(char a[]) {
    for (int i = 0; i < strlen(a)/2; i++) {
        if (a[i] != a[strlen(a) - i - 1]) {
            return 0;
        }
    }
    return 1;
}
 
int main() {
    int t;
    scanf ("%d", &t);
    while (t--) {
        scanf ("%s", a);
        strupr();
        convert();
        if (thuan_nghich(b) == 1) {
            printf ("YES\n");
        }
        else {
            printf ("NO\n");
        }
    }
} 
