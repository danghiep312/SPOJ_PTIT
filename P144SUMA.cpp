#include <bits/stdc++.h>
using namespace std;
 
int n;
vector<string> a;
 
void nhap() {
    cin >> n;
    string tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.push_back(tmp);
    }
}
 
void process() {
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i][1] == a[i + 1][0]) count++;
    }
    cout << count + 1;
}
 
int main() {
    nhap();
    process();
} 
