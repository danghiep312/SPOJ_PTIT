#include <bits/stdc++.h>
using namespace std;
 
void result(int k) {
    k--;
    if (k == 0) {
        cout << "4";
        return;
    }
    if (k == 1) {
        cout << "7";
        return;
    }
    result(k/2);
    if (k % 2 == 0) {
        cout << "4";
    }
    else {
        cout << "7";
    }
}
 
int main() {
    int k;
    cin >> k;
    result(k);
} 
