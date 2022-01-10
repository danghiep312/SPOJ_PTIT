#include <bits/stdc++.h>
using namespace std;
 
vector<int> a (1e6, 0);
 
void snt() {
	a[0] = a[1] = 1;
	for (int i = 2; i*i <= 1e6; i++) {
        if (a[i] == 0) {
			for (int j = i*i; j <= 1e6; j += i) {
				a[j] = 1;
			}
		}
	}
}
 
int count (int m, int n) {
    int count_tmp = 0;
    for (int i = m; i <= n - 5; i++) {
        if (a[i] == 0 && a[i + 6] == 0) {
            count_tmp++;
        } 
    }
    return count_tmp;
}
 
void run() {
    snt();
    int T;
    cin >> T;
    while (T--) {
        int m, n;
        cin >> m >> n;
        cout << count(m,n) << endl;
    }
}
 
int main() {
    run();
} 
