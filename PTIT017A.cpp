#include <bits/stdc++.h>
using namespace std;
 
#define MAX 10000001
vector<int> countt(MAX, 0);
vector<int> a(MAX, 0);
int T, c, b, k;
void snt() {
	a[0] = a[1] = 0;
	for (int i = 2; i <= MAX; i++) {
        if (a[i] == 0) {
			for (int j = i; j <= MAX; j += i) {
				a[j]++;
			}
		}
	}
}
 
int main() {
    snt();
    cin >> T;
    for (int t = 1; t <= T; t++) {
        int count = 0;
        cin >> c >> b >> k;
        for (int i = c; i <= b; i++) {
            if (a[i] == k) {
                count++;
            }
        }
        cout << "Case #" << t << ": " << count << endl;
    }
}
    
 
