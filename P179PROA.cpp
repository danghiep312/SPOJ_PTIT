#include <stdio.h>
 
struct Poke {
	char name[100];
	int n;		// can dung
	int m;      // dang co
	int k;
};
 
struct Poke a[100];
int n, max = 0, sum = 0;
 
void nhap() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		a[i].k = 0;
		scanf("%s", a[i].name);
		scanf("%d%d", &a[i].n, &a[i].m);
		while (a[i].m >= a[i].n) {
			a[i].k += a[i].m/a[i].n;
			a[i].m = a[i].m % a[i].n + (a[i].m/a[i].n)*2;
		}
		sum += a[i].k;
		max = a[i].k > max ? a[i].k : max;
	}
}
 
void run() {
	nhap();
	printf("%d\n", sum);
	for (int i = 0; i < n; i++) {
		if (a[i].k == max) {
			printf("%s", a[i].name);
			break;
		}
	}
}
 
int main() {
	run();
} 
