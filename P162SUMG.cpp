#include <stdio.h>
#include <string.h>
char a[200];
void strupr (){
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] >= 'a' && a[i] <= 'z') {
            a[i] = a[i] - 'a' + 'A';
        }
    }
}
 
void strlwr () {
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] >= 'A' && a[i] <= 'Z') {
            a[i] = a[i] - 'A' + 'a';
        }
    }
}
 
int main() {
    int thuong = 0, hoa = 0;
    scanf ("%s", a);
    for (int i = 0; i < strlen(a); i++) {
        if (a[i] <= 'z' && a[i] >= 'a') {
            thuong++;
        }
        else {
            hoa++;
        }
    }
    if (thuong >= hoa) {
        strlwr();
    }
    else {
        strupr();
    }
    printf("%s", a);
} 
