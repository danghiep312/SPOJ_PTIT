#include <bits/stdc++.h>
using namespace std;
 
int main() {
    while (1) {
        string a;
        int n;
        cin >> a;
        if (a == "[END]") return 0;
        cin >> n;
        if (n % 5 == 2 || n % 5 == 0) cout << "Hanako" << endl;
        else cout << "Taro" << endl;
    }
} 
