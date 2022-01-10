#include <bits/stdc++.h>
using namespace std;
 
string a;
double n;
bool check(double x) {
    int tmp = x;
    if (tmp == x) return true;
    return false;
}
 
void process() {
    cin >> n;
    bool tick = false;
    int count7, count4;
    for (int i = 0; i <= (int) n/4; i++) {
        double tmp = (n - 4*i)/7;
        if (check(tmp)) {
            count4 = i;
            count7 = tmp;
            tick = true;
        }
    }
    //cout << count7 << " " << count4;
    if (tick) {
        for (int i = 0; i < count4; i++) {
            cout << 4;
        }
        for (int i = 0; i < count7; i++) {
            cout << 7;
        }
    }
    else {
        cout << -1;
    }
}
 
int main() {
    process();
    //cout << check(4.000);
} 
