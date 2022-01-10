#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
ll l1, r1, l2, r2, k;
 
void process() {
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    if (l2 > r1) {
        cout << 0;
    }
    if (l2 <= r1 && l2 >= l1) {
        if (r2 > r1) {
            if (k >= l2 && k <= r1) {
                cout << r1 - l2;
            }
            else {
                cout << r1 - l2 + 1;
            }
        }
        else {
            if (k >= l2 && k <= r2) {
                cout << r2 - l2;
            }
            else {
                cout << r2 - l2 + 1;
            }
        }
    }
    if (l2 < l1) {
        if (r2 > r1) {
            if (k <= r1 && k >= l1) {
                cout << r1 - l1;
            }
            else {
                cout << r1 - l1 + 1;
            }
        }
        else if (r2 <= r1 && r2 >= l1) {
            if (k <= r2 && k >= l1) {
                cout << r2 - l1;
            }
            else {
                cout << r2 - l1 + 1;
            }
        }
        else {
            cout << 0;
        }
    }
}
 
int main() {
    process();
} 
