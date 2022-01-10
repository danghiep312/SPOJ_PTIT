#include <bits/stdc++.h>
using namespace std;
 
string a;
 
void init() {
    cin >> a;
    while (a.size() % 3 != 0) {
        a = '0' + a;
    }
}
 
void process() {
    int sum = 0;
    int k = 3;
    for (int i = 0; i < a.size(); i++) {
        k--;
        if (a[i] == '1') {
            sum += pow(2,k);
        }
        if (k == 0) {
            cout << sum;
            sum = 0;
            k = 3;
        } 
    }
}
 
int main() {
    init();
    process();
} 
