#include <bits/stdc++.h>
using namespace std;
 
struct Data {
    int sour, spice;
};
vector<Data> x;
int n, a[11];
priority_queue<int, vector<int>, greater<int>> b;
void init() {
    cin >> n;
    x.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i].sour >> x[i].spice;
    }
}
 
void check() {
    int mul = 1, sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if  (a[i] == 1) {
            mul *= x[i].sour;
            sum += x[i].spice;
        }
        //cout << a[i];
        else count++;
    }
    if (count == n) return;
    //cout << mul - sum << " ";
    b.push(abs(mul - sum));
 
    //cout << endl;
}
 
void process(int i) {
    if (i >= n) {
        check();
    }
    else {
        for (int j = 0; j < 2; j++) {
            a[i] = j;
            process(i + 1);
        }
    }
}
 
int main() {
    init();
    process(0);
    //cout << minz;
        cout << b.top();
} 
