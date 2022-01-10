#include <bits/stdc++.h>
 
using namespace std;
 
int nen (int n) {
    int sum = 0;
    while (n > 0) {
        sum += n%10;
        n /= 10;
    }
    if (sum >= 10) return nen(sum);
    else return sum;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << nen(n) << endl;
    }
} 
