#include <bits/stdc++.h>
#define P 1000000007
 
using namespace std;
typedef long long ll;
 
ll nCr[1003][1003] = {0};
 
void init() {
    int k; 
    for (int i = 0; i < 1003; i++) {   //nCr[i][j] = to hop chap j cua i
        nCr[i][0] = nCr[i][i] = 1;
        k = i/ 2;
        for(int j = 1; j <= k; j++) {
            nCr[i][j] = nCr[i][i - j] = (nCr[i - 1][j - 1] + nCr[i - 1][j]) % P;
        }
    }
}
 
void process() {
    int n, r;
    cin >> n >> r;
    cout << nCr[n][r] << endl;
}
 
int main() {
    init();
    int t;
    cin >> t;
    while (t--) {
        process();
    }
} 
