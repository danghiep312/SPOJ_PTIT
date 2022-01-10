#include <bits/stdc++.h>
using namespace std;
int a,b;
 
int process (int n) {
    int count = 0;
    for (int i = 1; i < sqrt(n); i++) {
        if (n % i == 0) {
            if (i > b) count++;
            if (n/i > b) count++;
        }
    }
    int tmp = sqrt(n);
    if (tmp * tmp == n && tmp > b) {
        count++; 
    }
    return count;
}
 
int main(){ 
    cin >> a >> b;
    if (a == b) cout << "infinity";
    else if (a < b) cout << "0";
    else cout << process(a - b);
} 
