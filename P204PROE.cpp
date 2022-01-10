#include <bits/stdc++.h>
using namespace std;
 
int n, m;
char a[50][50];
void init() {
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            cin >> a[i][j];
        }
    }
}
 
void process() {
    int count = 0;
    int idex, jdex;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (a[i][j] == 'B') {
                count++;
                idex = i;
                jdex = j;
            }
        }
    }
    int canh = sqrt(count);
    //cout << idex << " " << jdex << " " << count << endl;
    cout << idex - canh/2 << " " << jdex - canh/2;
}
 
int main() {
    init();
    process();
} 
