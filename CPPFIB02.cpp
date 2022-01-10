#include <stdio.h>
#include <math.h>
 
int main() {
	long long f[200], T;
	f[0] =  0;
	f[1] = 1;
	for (int i = 2; i < 93; i++) {
		f[i] = f[i - 1] + f[i - 2];
	}
	scanf ("%lld", &T);
	
	for (int t = 0; t < T; t++) {
		long long a, c = 0;
		scanf ("%lld", &a);
		for (int i = 0; i < 93; i++) {
			if (a == f[i]) {
				printf ("YES");
				c = 1;
				break;
			}
		}
		if (c == 0) {
			printf ("NO");
		}
		printf ("\n");
	}
} 
