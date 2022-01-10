#include <bits/stdc++.h>
using namespace std;
 
int result(int n, int a, int b) {
    if (a < b) {
        int tmp = a;
        a = b;
        b = tmp;
    }
    int i = n/a;
    for (int j = i; j >= 0; j--) {
        if ((n - j*a) % b == 0) {
            return j + (n - j*a) / b;
        }
    }
    return -1;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        cout << result(n, a, b) << endl;
    }
} 
