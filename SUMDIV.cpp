#include <stdio.h>
#include <cmath>
int soChinhPhuong (long long n){
	long long x = sqrt(n);
	if (x*x == n) return 1;
	  else return 0;
}
 
long long tongUoc (long long n){
	long long sum = 0;
	for (int i = 1; i < sqrt(n); i++){
		if (n % i ==0){
			sum += i;
			sum += (n/i);
		}
	}
	if (soChinhPhuong(n) ) {
		sum += sqrt(n);
	}
	return sum;
}
 
int main(){
	int a;
	scanf ("%d", &a);
	long long n;
	for (int i = 0; i < a; i++){
		scanf ("%lld", &n);
		
		printf ("%lld\n", tongUoc(n));
	}
}
 
