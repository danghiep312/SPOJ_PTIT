#include <bits/stdc++.h>
using namespace std;
 
int a[100], n;
bool flag = true;
void init() { //khoi tao mang ban dau
    for (int i = 0; i < n; i++) {
        a[i] = 0;
    }
}
 
void display() {// in cau hinh
    for (int i = 0; i < n; i++) {
        cout << a[i];
    }
    cout << endl;
}
 
void process() {// thuc hien qua trinh bien doi trong cac lan sinh
    int i = n - 1;
    while (i >= 0 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if (i == -1) flag = false;
    else a[i] = 1;
}
 
void run() {
    while (flag) {
        display();
        process();
    }
}
 
void sinh(int i) {
    if (i >= n) {
        display();
    }
    else {
        for (int j = 0; j < 2; j++) {
            a[i] = j;
            sinh (i + 1);
        }
    }
}
 
void numToBinary(int i) {
    int k = i;
    string a;
    while (a.size() != n) {
        a = (char) (k % 2 + 48) + a;
        k /= 2;
    }
    cout << a << endl;
}
 
int main() {
    cin >> n;
    init();
    //sinh(0);
    //run();
    for (int i = 0; i < pow(2,n); i++) {
        numToBinary(i);
    }
} 
