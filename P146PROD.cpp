#include <bits/stdc++.h>
using namespace std;
 
 
int main() {
    int n, tmp;
    int count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a[2] = {0};
        for (int j = 0; j < 3; j++) {
            cin >> tmp;
            a[tmp]++;
        }
        if (a[1] > 1) {
            count++;
        }
    }
    cout << count;
}
 
