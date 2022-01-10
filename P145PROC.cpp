#include <bits/stdc++.h>
using namespace std;
 
vector<int> a(42, 0);
 
void init() {
    int tmp;
    for (int i = 0; i < 10; i++) {
        cin >> tmp;
        a[tmp %= 42]++;
    }
}
 
int main() {
    init();
    int count = 0;
    for (int i = 0; i < 42; i++) {
        if (a[i] != 0) count++;
    }
    cout << count;
} 
