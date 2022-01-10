#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int dd[1005] = {0};
        int n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            dd[tmp]++;
        }
        int max = 0, index;
        for (int i = 0; i <= 1000; i++) {
            if (dd[i] > max) {
                max = dd[i];
                index = i;
            }
        }
        cout << index << endl;
    }
} 
