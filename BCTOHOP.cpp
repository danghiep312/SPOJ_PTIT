#include <bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
 
int a[20];
int n, k;
bool flag = true;
 
void init() {
    for (int i = 1; i <= k; i++) {
        a[i] = i;
    }
}
 
void display() {
    for (int i = 1; i <= k; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
 
void sinh() {
    int i = k;
    while (a[i] == n - k + i) {
        i--;
    }
    if (i == 0) flag = false;
    else {
        a[i]++;
        int tmp = a[i] + 1;
        for (int j = i + 1; j <= k; j++) {
            a[j] = tmp++;
        }
    }
}
 
void process() {
    flag = true;
    while (flag) {
        display();
        sinh();
    }
}
 
int main() {
    faster();
    int t;
    //cin >> t;
    t = 1;
    while(t--) {
        cin >> n >> k;
        init();
        process();
        cout << endl;
    }
} 
