#include <bits/stdc++.h>
using namespace std;
 
vector<int> a(1e6, 0);
 
void init() {
	a[0] = a[1] = 1;
	for (int i = 2; i <= 1e6; i++) {
        if (a[i] == 0) {
			for (int j = i; j <= 1e6; j += i) {
				if (a[j] == 0) {
                    a[j] = i;
                }
			}
		}
	}
}
 
void process() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
 
int main() {
    init();
    int t;
    cin >> t;
    while (t--) {
        process();
    }
} 
