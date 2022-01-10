#include <iostream>
using namespace std;
 
int main () {
	int dd[15];
	long long n;
	while (cin >> n) {
		for (int i = 0; i <= 9; i++) {
			dd[i] = 0;
		}
		int k = 0;
		while (1) {
			int kt = 1;
			for (int i = 0; i <= 9; i++) {
				if (dd[i] == 0) {
					kt=0;
					break;
				}
			}
			if (kt == 1) break;
			k++;
			long long S = n*k;
			long long p = 1;
			while (S/p != 0) {
				int so = (S/p) % 10;
				dd[so] = 1;
				p *= 10;
			}
		}
		cout << k << endl;
	}
	return 0;
} 
