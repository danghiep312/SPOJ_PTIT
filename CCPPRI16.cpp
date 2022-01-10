#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
vector<int> a (1e6, 0);
vector<int> countt(1e6, 0); //tu 1 den j co k so nguyen to
 
 
void snt() {
	a[0] = a[1] = 1;
	for (int i = 2; i <= 1e6; i++) {
        countt[i] += countt[i - 1];
		if (a[i] == 0) {
            countt[i]++;
			for (long long j = (long long) i*i; j <= 1e6; j += i) {
				a[j] = 1; 
			}
		}
	}
}
ll n;
 
void process() {
    int count = 0;
    cin >> n;
    int tmp = sqrt(n);
    cout << countt[tmp] << endl;     
}
 
int main() {
    snt();
    int t;
    cin >> t;
    while(t--) {
        process();
    }
} 
