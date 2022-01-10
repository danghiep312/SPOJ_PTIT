#include <bits/stdc++.h>
using namespace std;
 
int m, n;
 
bool cp(int k){ 
    int x = sqrt(k);
    if (x * x == k) return true;
    return false;
}
 
void process(){
    int count = 0;
    int b = 0;
    while(b != n) {
        int a2 = n - b;
        if (cp(a2)) {
            if (sqrt(a2) == m - b*b) count++;
        }
        b++;
    }
    cout << count;
}
 
int main() {
    cin >> n >> m;
    process();
} 
