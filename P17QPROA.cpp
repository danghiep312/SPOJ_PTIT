#include<bits/stdc++.h>
using namespace std;
 
int cp (int x) {
    int tmp = sqrt(x);
    if (tmp * tmp == x) return 1;
    return 0;
}
 
void process() {
    int count = 0;
    int x;
    cin >> x;
    if (x == 0) {
        cout << 1 << endl;
        return;
    }
    int k = sqrt(x);
    while(k > -1) {
        if (cp(x - k*k)) {
            count++;
        }
        k--;
    }
    cout << count/2 << endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        process();
    }
} 
