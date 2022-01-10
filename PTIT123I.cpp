#include <bits/stdc++.h>
using namespace std;
 
vector<int> a (1e6 + 10, 0);
vector<int> countt(1e6 + 10, 0); //tu 1 den j co k so nguyen to
 
void snt() {
	a[0] = 1;
	a[1] = 1;
	for (int i = 2; i <= 1e6; i++) {
		countt[i] = countt[i - 1];
		if (a[i] == 0) {
			countt[i]++;
			for (long long j = 1LL * i * i; j <= 1e6; j += i) {
				a[j] = 1;
			}
		}
	}
}
 
int main(){
	snt();
	// for (int i = 0; i < 30; i++) {
	// 	cout << countt[i] << ' ';
	// }
	// cout << endl;
	// for (int i = 0; i < 30; i++) {
	// 	cout << a[i] << ' ';
	// }
	int n;
	while (1) {
		cin >> n;
		if (n == 0) break;
		cout << countt[2*n] - countt[n];
		cout << endl;
	}
}
 
