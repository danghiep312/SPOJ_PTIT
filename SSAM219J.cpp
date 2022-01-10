#include<iostream>
 
using namespace std;
int main() {
	int T;
	cin >> T;
	for (int t = 0; t < T; t++) {
		int index;
		long long sum = 0;
		long long n, k, a[100000];
		cin >> n >> k;
		for (int i = 0; i < n; i++) {
			cin >> a[i];
			if (sum < k) {
				sum += a[i];
				index = i + 1;
			}
		}
		if (k == 0) {
			int c = 0;
			for (int i = 0; i < n; i++) {
				if (a[i] == 0) {
					cout << "YES" << endl;
					c = 1;
					break;
				}
			}
			if (c == 0) {
				cout << "NO" << endl;
			}
		}
		else {
			int i = 0, tick = 0;
			if (sum == k) {
				cout << "YES" <<endl;
			}
			else {
				while (true) {
					sum -= a[i];
					i++;
					while (sum < k && index < n) {
						sum += a[index];
						index++;
					}
					if (sum == k) {
						cout << "YES" << endl;
						break;
					}
					if (sum == 0) {
						cout << "NO" << endl;
						break;
					}
				}
			}
		}
	}
} 
