#include <bits/stdc++.h>
using namespace std;
 
string a;
 
void process() {
    cin >> a;
    string b;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != 'A' && a[i] != 'O' && a[i] != 'I' &&a[i] != 'E' &&a[i] != 'U' && a[i] != 'Y' && a[i] != 'a' && a[i] != 'o' && a[i] != 'i' &&a[i] != 'e' &&a[i] != 'u' && a[i] != 'y') {
            b += '.';
            if (a[i] >= 'A' && a[i] <= 'Z') {
                a[i] += 32;
            }
            b += a[i];
        }
    }
    cout << b;
}
 
int main() {
    process();
} 
