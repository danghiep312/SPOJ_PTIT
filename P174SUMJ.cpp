#include <bits/stdc++.h>
using namespace std;
 
int n;
vector<int> a;
 
void nhap() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
}
 
int pk() {
    int check[1001] = {0};
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j] && check[j] == 0) {
                count++;
                check[j] = 1;
                break;
            }
        } 
    }
    return count;
}
 
int main() {
    nhap();
    cout << pk();
} 
