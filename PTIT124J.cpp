#include <bits/stdc++.h>
using namespace std;
 
string a;
 
int pow(int x) {
    //2 mu x;
    int res = 1;
    for (int i = 0; i < x; i++) {
        res *= 2;
    }
    return res;
}
 
void init() {
    cin >> a;
    while (a.size() % 3 != 0) {
        a = '0' + a;
    }
}
 
void process() {
    int k = 3, tmp = 0;
    for (int i = 0; i < a.size(); i++) {
        k--;
        if (a[i] == '1') {
            tmp += pow(k);
        }
        if (k == 0) {
            cout << tmp;
            k = 3;
            tmp = 0;
        }
    }
}
 
int main() {
    init();
    process();
} 
