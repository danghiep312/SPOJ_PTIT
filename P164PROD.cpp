#include<bits/stdc++.h>
using namespace std;
 
long long pow3 (long long b) {
    long long res = 1;
    for (int i = 0; i < b; i++) {
        res *= 3;
    }
    return res;
}
 
string cs3 (long long n) {
    string tmp;
    stack<long long> a;
    while (n > 0) {
        a.push(n % 3);
        n /= 3;
    }
    while (!a.empty()) {
        tmp += a.top() + 48;
        a.pop();
    }
    return tmp;
}
 
long long cs10(string a) {
    long long sum = 0, k = a.size() - 1;
    for (int i = 0; i < a.size(); i++) {
        sum += (a[i] - 48)*pow3(k);
        k--;
    }
    return sum;
}
 
string torRev (string a, string c) {
    while (a.size() < c.size()) {
        a = '0' + a;
    }
    while (c.size() < a.size()) {
        c = '0' + c;
    }
    string tmp;
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j <= 2; j++) {
            if ((a[i] - 48 + j) % 3 == c[i] - 48) {
                tmp += (j + 48);
                break;
            }
        }
    }
    return tmp;
}
 
void process() {
    long long a, c;
    cin >> a >> c;
    cout << cs10(torRev(cs3(a), cs3(c)));
}
 
int main() {
    process();
} 
