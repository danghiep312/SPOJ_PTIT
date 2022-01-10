#include <bits/stdc++.h>
using namespace std;
 
int main() {
    long long n, m;
    cin >> n >> m;
    long long a = n % 5;
    long long b = n / 5;
    long long c = m % 5;
    long long d = m / 5;
    long long res = 5*b*d + b*c + a*d;
    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= c; j++) {
            if ((i + j) % 5 == 0) res++;
        }
    }
    cout << res;
} 
