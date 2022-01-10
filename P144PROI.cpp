#include <bits/stdc++.h>
using namespace std;
 
struct Ra {
	int x, y;
};
 
int n, xmin = 1000000000, ymax = 0;
vector<Ra> a;
 
void init(){
	cin >> n;
	a.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i].x >> a[i].y;
        if (a[i].x <= xmin) {
            xmin = a[i].x;
        }
        if (a[i].y >= ymax) {
            ymax = a[i].y;
        }
	}
}
 
int check() {
    for (int i = 0; i < n; i++) {
        if (a[i].x == xmin && a[i].y == ymax) return i + 1;
    }
    return -1;
}
 
int main() {
    init();
    cout << check();
}
 
 
