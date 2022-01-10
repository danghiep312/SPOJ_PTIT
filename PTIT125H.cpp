#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    string a;
    cin >> a;
    int count = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] == 'S') {
            count++;
        }
        else {
            count++;
            i++;
        }
    }
    if (n > count) {
        cout << count;
    }
    else {
        cout << n;
    }
} 
