#include <bits/stdc++.h>
using namespace std;
 
void process(int x) {
    int count = 1;
    while (x != 1) {       
        if (x % 2 == 0) {
            x /= 2;
        }
        else {
            x = 3*x + 1;
        }
        count++;
    }
    cout << count << endl;
}
 
int main() {
    int x;
    while(1) {
        cin >> x;
        if (x == 0) return 0;
        process(x);
    }
} 
