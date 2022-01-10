#include <bits/stdc++.h>
using namespace std;
 
string a;
 
void process() {
    int dd[26] = {0};
    int count = 0;
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        dd[a[i] - 97]++;
    }
    
    for (int i = 0; i < 26; i++) {
        if (dd[i] % 2 != 0) {
            count++;
        }
    }
 
    if (count > 3) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
    }
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        process();
    }
} 
