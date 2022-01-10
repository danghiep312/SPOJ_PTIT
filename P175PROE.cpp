#include <bits/stdc++.h>
 
using namespace std;
 
int d = 1;
 
void nen (int n) {
    d++;
    int sum = 0;
    while (n > 0) {
        sum += n%10;
        n /= 10;
    }
    if (sum >= 10) nen(sum);
    return;
}
 
int main() {
    string a;
    cin >> a;
    if (a.size() < 2) {
        cout << 0;
        return 0;
    }
    int tmp = 0;
    for (int i = 0; i < a.size(); i++) {
        tmp += (a[i] - 48);
    }
    if (tmp > 9) nen(tmp);
    cout << d;
} 
