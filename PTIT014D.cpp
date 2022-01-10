#include <bits/stdc++.h>
 
using namespace std;
 
long long nen (long long n) {
    long long sum = 0;
    while (n > 0) {
        sum += n%10;
        n /= 10;
    }
    if (sum >= 10) return nen(sum);
    else return sum;
}
 
long long convert(string a) {
    long long sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum += (a[i] - 48);
    }
    return sum;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        string a;
        cin >> a;
        if (nen(convert(a)) == 9) {
            cout << 1 << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
} 
