#include <bits/stdc++.h>
using namespace std;
 
int convert(string s) {
    int tmp = 0;
    for (int i = 0; i < s.size(); i++) {
        tmp = tmp*10 + (s[i] - 48);
    }
    return tmp;
}
 
int sumMax(string a, string b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 53) {
            a[i] = 54;
        }
    }
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == 53) {
            b[i] = 54;
        }
    }
    int sum = convert(a) + convert(b);
    return sum;
}
 
int sumMin(string a, string b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == 54) {
            a[i] = 53;
        }
    }
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == 54) {
            b[i] = 53;
        }
    }
    int sum = convert(a) + convert(b);
    return sum;
}
 
int main() {
    string a, b;
    cin >> a >> b;
    cout << sumMin(a, b) << " " << sumMax(a, b);
} 
