#include<bits/stdc++.h>
using namespace std;
 
int a[50], n;
bool check = true;
void init() {
    for (int i = 1; i <= n; i++) {
        a[i] = i;
    }
}
 
void display() {
    for (int i = 1; i <= n; i++) {
        cout << a[i];
    }
    cout << endl;
}
void sinh() {
    int i = n - 1;
    while (i > 0 && a[i] > a[i + 1]) i--;
    if (i == 0) check = false;
    else {
        int k = n;
        while (a[k] < a[i]) 
            k--;
        swap(a[i], a[k]);
        sort(a + 1 + i, a + 1 + n);
    }
}
 
void process() {
    do {
        display();
        sinh();
    }
    while (check);
}
 
int main() {
    cin >> n;
    init();
    process();
} 
