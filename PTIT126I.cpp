#include <stdio.h>
#include <string.h>
 
int main() {
    char crosWo[100][100];
    char a[1000], b[1000];
    int indexA, indexB;
    scanf ("%s", a);
    scanf ("%s", b);
    for (int i = 0; i < strlen(a); i++) {
        int tick = 0;
        for (int j = 0; j < strlen(b); j++) {
            if (a[i] == b[j]) {
                indexA = i;
                indexB = j;
                tick = 1;
                break;
            }           
        }
        if (tick == 1) break;
    }
    
    for (int i = 0; i < strlen(b); i++) {
        for (int j = 0; j < strlen(a); j++) {
            if (i == indexB) {
                printf ("%c", a[j]);
            }
            else if (j == indexA) {
                printf ("%c", b[i]);
            }
            else {
                printf (".");
            }
        }
        printf("\n");
    }
} 
