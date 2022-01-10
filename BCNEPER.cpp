#include <bits/stdc++.h>
#include <string>
using namespace std;
 
void swap(char &a, char &b) {
    char tmp = a;
    a = b;
    b = tmp;
}
 
int climb(string a) {
    for (int i = a.size() - 2; i >= 0; i--) {
        if (a[i] < a[i + 1]) {
            return i;
        }
    }
    return -1;
}
 
int main() {
    int T;
    cin >> T;
    for (int t = 0; t < T; t++) {
        int x;
        cin >> x;
        string a;
        cin >> a;
        int k = climb(a);
        cout << x << ' ';
        if (k == -1) {
            cout << "BIGGEST";
        }
        else {
            for (int i = a.size() -1; i >= 0; i--) {
                if (a[i] > a[k]) {
                    swap (a[i], a[k]);
                    break;
                }
            }
            for (int i = 0; i <= k; i++) {
                cout << a[i];
            }
            for (int i = a.size() - 1; i > k; i--) {
                cout << a[i];
            }
        }
        cout << endl;
    }
}
//985643 
 
