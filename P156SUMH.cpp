#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    int k = 1, x = n/2;
    for (int i = 1; i <= n/2 + 1; i++) {
        for (int j = 0; j < x; j++) {
            cout << "*";
        }
        for (int j = 0; j < k; j++) {
            cout << "D";
        }
        for (int j = 0; j < x; j++) {
            cout << "*";
        }
        k += 2;
        x--;
        cout << endl;
    }
    x += 2;
    k -= 4;
    for (int i = n/2; i >= 1; i--) {
        for (int j = 0; j < x; j++) {
            cout << "*";
        }
        for (int j = 0; j < k; j++) {
            cout << "D";
        }
        for (int j = 0; j < x; j++) {
            cout << "*";
        }
        k -= 2;
        x++;
        cout << endl;
    }
} 
