#include <bits/stdc++.h>
using namespace std;
 
int result (int m, int n, int k) {
    int maxTeam = m / 2 > n ? n : m/2;
    if ((m - maxTeam*2 + n - maxTeam) >= k) {
        return maxTeam;
    }
    else {
        while (maxTeam > 0 && (m - maxTeam*2 + n - maxTeam) < k) {
            maxTeam--;
        }
    }
    return maxTeam;
}
 
int main() {
    int n, m, k;
    cin >> m >> n >> k;
 
    cout << result(m,n,k);
} 
