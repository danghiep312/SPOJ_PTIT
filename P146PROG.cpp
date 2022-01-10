#include <bits/stdc++.h>
using namespace std;
 
int n;
vector<int> a;
 
void init() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
 
void process() {
    if (n == 1) {
        cout << "1 0";
        return;
    }
    int sumLeft = 0, sumRight = 0, x = 0, y = n - 1;
    for (int i = 0, j = n - 1; i < n, j >= 0; ) {
        if (a[i] == a[j]) {
            sumLeft++;
            sumRight++;
            i++;
            j--;
            if (i == j) {
                sumLeft++;
                break;
            }
        }
        else if (a[i] < a[j]) {
            a[j] -= a[i];
            sumLeft++;
            i++;
            if (i == j) {
                sumRight++;
                break;
            }
        }
        else {
            a[i] -= a[j];
            sumRight++;
            j--;
            if (j == i) {
                sumLeft++;
                break;
            }
        }
    }
    cout << sumLeft << " " << sumRight;
}
 
int main() {
    init();
    process();
} 
