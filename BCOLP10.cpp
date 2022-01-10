#include <bits/stdc++.h>
using namespace std;
 
vector<int> cA (26, 0);
vector<int> cB (26, 0);
 
int main() {
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        cA[a[i] - 97]++;
    }
    for (int i = 0; i < b.size(); i++) {
        cB[b[i] - 97]++;
    }
    int sum = 0;
    for (int i = 0; i < 26; i++) {
        sum += abs(cB[i] - cA[i]);
    }
    cout << sum;
} 
