#include <stdio.h>
#include <math.h>
 
long long maxPrime (long long n) {
	long long max = 0;
	while (n % 2 == 0) {
		max = 2;
		n /= 2;
	}
	for (int i = 3; i <= sqrt(n); i += 2) {
		while (n % i == 0) {
			n /= i;
			max = i;
		}
	}
	if (n > 1) max = n;
	return max;
}
 
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		long long n;
		scanf ("%lld", &n);
		printf("%lld\n", maxPrime(n));
	}
} 
