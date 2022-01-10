#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a[3];
    for (int i = 0; i < 3; i++) {
        cin >> a[i];
    }
    int min = a[0];
    int max = a[0];
    for (int i = 1; i < 3; i++) {
        min = a[i] < min ? a[i] : min;
        max = a[i] > max ? a[i] : max; 
    }
    cout << max - min;
} 
