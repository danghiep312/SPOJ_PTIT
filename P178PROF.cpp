#include <bits/stdc++.h>
using namespace std;
 
 
long long result(long long n, long long count) {
    if (n == 1) return count;
    if (n % 2 == 0) return result(n/2, count + 1);
    else return result(3*n + 1, count + 1);
}
 
int main() {
    long long n;
    while (1) {
        cin >> n;
        if (n == 0) return 0;
        cout << result(n, 1) << endl;
    }
} 
