#include <bits/stdc++.h>
using namespace std;
 
int n, a, b;
 
int main() {
    cin >> n >> a >> b;
    int tmp = n - a;
    if (tmp > b) {
        tmp = b + 1;
    }
    cout << tmp;
} 
