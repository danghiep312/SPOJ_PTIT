#include <bits/stdc++.h>
using namespace std;
 
vector<int> a(5001, 0);
 
int n;
 
void init() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        a[tmp]++;
    }
}
 
void process() {
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (a[i] == 0) {
            count++;
        }
    }
    cout << count;
}
 
int main() {
    init();
    process();
} 
