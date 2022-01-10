#include <bits/stdc++.h>
using namespace std;
 
int brickUsed (int n) {
    return (n + 1)*n/2;
}
 
int floor(int n) {
    int i = 1, count = 0;
    while (n > 0) {
        n -= brickUsed(i);
        if (n >= 0) count++;
        i++;
    }
    return count;
}
 
int main() {
    int n;
    cin >> n;
    cout << floor(n);
} 
