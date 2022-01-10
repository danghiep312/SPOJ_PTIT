#include <bits/stdc++.h>
using namespace std;
 
vector<int> a(8);
 
void nhap() {
    for (int i = 0; i < 8; i++) {
        cin >> a[i];
    }
}
 
bool checkAs() {
    for (int i = 0; i < 7; i++) {
        if (a[i] > a[i + 1]) return false;
    }
    return true;
}
 
bool checkDe() {
    for (int i = 0; i < 7; i++) {
        if (a[i] < a[i + 1]) return false;
    }
    return true;
}
 
int main() {
    nhap();
    if (checkAs()) {
        cout << "ascending";
    }
    else if (checkDe()) {
        cout << "descending";
    }
    else {
        cout << "mixed";
    }
} 
