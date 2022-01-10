#include <bits/stdc++.h>
#include <string>
 
using namespace std;
 
struct ACM {
    string name;
    int sub[2][4];
    int pel, count;
};
 
ACM a[10000];
 
int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        a[i].pel = 0;
        a[i].count = 0;
        cin >> a[i].name;
        for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 2; k++) {
                cin >> a[i].sub[k][j]; 
            }
        }
        for (int j = 0; j < 4; j++) {
            if (a[i].sub[j][1] != 0) {
                a[i].count++;
            }
            if (a[i].sub[j][1] != 0) {
                a[i].pel = a[i].pel + a[i].sub[1][j] + (a[i].sub[0][j] - 1)*20;
            }
        }
    }
 
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (a[j].count > a[j + 1].count) {
                ACM tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    
    int min = a[n - 1].pel;
    int index = n - 1;
    for (int i = 0; i < n - 1; i++) {
        if (a[i].count == a[n - 1].count) {
            if (a[i].pel < min) {
                min = a[i].pel;
                index = i;
            }
        }
    }
    cout << a[index].name << ' ' << a[index].count << ' ' << min;
} 
