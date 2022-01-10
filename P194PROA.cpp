#include<bits/stdc++.h>
using namespace std;
 
int n;
vector<int> a(2);
 
void init() {
    a[1] = 0;
    a[0] = 0;
}
 
int main() {
    int count = 0, tmp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        init();
        for (int i = 0; i < 3; i++) {
            cin >> tmp;
            a[tmp]++;
        }
        if (a[1] > a[0]) count++;
    }
    cout << count;
} 
