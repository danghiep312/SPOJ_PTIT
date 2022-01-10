#include<iostream>
using namespace std;
main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		for (int i = 1; i <= (n - 1)/9; i++) {
			cout << "123456790";
		}
		int k = (n - 1) % 9;
		for (int i = 1; i <= k; i++) {
			cout << char (48 + i);
		}
		for (int i = k + 1; i >= 2; i--) {
			cout << char (48 + i);
		}
		for (int i = 1; i <= (n - 1)/9; i++) {
			cout << "098765432";
		}
		cout << "1" << endl;
	}
} 
