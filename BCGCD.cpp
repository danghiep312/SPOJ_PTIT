#include <stdio.h>
 
long long UCLN (long long a, long long b) {
	while ( a*b != 0){
		if (a > b) {
			a %= b;
		}
		else {
			b %= a;
		}
	}
	long long j = a + b;
	return j;
}
 
long long BCNN (long long a, long long b) {
	long long j = (a*b)/UCLN(a, b);
	return j;
}
 
int main(){
	long long a, b;
	while (true){
		scanf ("%lld%lld", &a, &b);
		if (a == 0 && b ==0) break;
		printf ("%lld %lld\n", UCLN(a, b), BCNN(a, b));
	}
}
 
