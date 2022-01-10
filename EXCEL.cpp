#include <bits/stdc++.h>
 
using namespace std;
 
string convert(long long n) {
    string tmp = "";
    while (n > 0) {
        n--;
        char c = 'A' + n % 26;
        n /= 26;
        tmp = c + tmp;
    }
    return tmp;
}
 
int main() {
    char tmp;
    long long a, b;
    while(1) {
        cin >> tmp >> a >> tmp >> b;
        if (a == 0 && b == 0) break;
        cout << convert(b) << a << endl;
    }
} 
