#include <bits/stdc++.h>
using namespace std;
 
vector<int> a (1e6, 0);
vector<int> countt (1e6, 0);
long long l, r;
int t;
 
void snt() {
	a[0] = a[1] = 1;
	for (int i = 2; i <= 1e6; i++) {
		countt[i] = countt[i - 1];
        if (a[i] == 0) {
			countt[i]++;
			for (long long j = (long long) i*i; j <= 1e6; j += i) {
				a[j] = 1;
			}
		}
	}
}
 
 
void process() {
    cin >> l >> r;
    long long tmp1 = sqrt(l);
    if (tmp1 * tmp1 != l) tmp1++;
    long long tmp2 = sqrt(r);
    //cout << tmp1 << " " << tmp2 << endl;
    cout << countt[tmp2] - countt[tmp1 - 1];
    // for (int i = 0; i < 50; i++) {
    //     cout << countt[i] << " ";
    // }
}
 
int main() {
    snt();
    cin >> t;
    while(t--) {
        process();
        cout << endl;
    }
} 
