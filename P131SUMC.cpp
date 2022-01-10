#include <bits/stdc++.h>
using namespace std;
 
float a[2][2];
int INDEX = 0;
float MAX;
void swap(float &a, float &b) {
    float tmp = a;
    a = b;
    b = tmp;
}
 
float value() {
    float tmp = abs(a[0][0]/a[1][0] - a[0][1]/a[1][1]);
    return tmp;
}
 
void init() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cin >> a[i][j];
        }
    }
    MAX = value();
}
 
void process() {
    for (int i = 1; i <= 3; i++) {
        swap(a[0][0], a[0][1]);
        swap(a[0][0], a[1][1]);
        swap(a[0][0], a[1][0]);
        if (value() > MAX) {
            MAX = value();
            INDEX = i;
        }
    }
}
 
int main() {
    init();
    process();
    cout << INDEX;
} 
