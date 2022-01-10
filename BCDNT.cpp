#include <bits/stdc++.h>
using namespace std;
 
int n;
vector<int> a;
 
void init() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
 
void process() {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) count++;
        }
    }
    cout << count;
}
 
int main() {
    init();
    process();
} 
