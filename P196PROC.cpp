#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    string a, b, c;
    c.resize(n);
    cin >> a >> b;
    for (int i = 0; i < n; i++) {
        if (a[i] == 'K' && b[i] == 'K') c[i] = 'B';
        if (a[i] == 'K' && b[i] == 'B') c[i] = 'B'; 
        if (a[i] == 'K' && b[i] == 'G') c[i] = 'K'; 
        if (a[i] == 'B' && b[i] == 'K') c[i] = 'B'; 
        if (a[i] == 'B' && b[i] == 'B') c[i] = 'G'; 
        if (a[i] == 'B' && b[i] == 'G') c[i] = 'G'; 
        if (a[i] == 'G' && b[i] == 'K') c[i] = 'K'; 
        if (a[i] == 'G' && b[i] == 'B') c[i] = 'G'; 
        if (a[i] == 'G' && b[i] == 'G') c[i] = 'K';  
    }
    for (int i = 0; i < n; i++) {
        cout << c[i];
    }
} 
