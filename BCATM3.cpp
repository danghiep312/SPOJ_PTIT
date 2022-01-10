#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
vector<int> a = {1, 2, 5, 10, 20, 50, 100, 200, 500};
 
int money(vector<int> a, int n) {
    int index, count  = 0;
    while (n > 0) {
        for (int i = a.size() - 1; i >= 0; i--) {
            if (a[i] <= n) {
                index = i;
                break;
            }
        }
        count += (n / a[index]);
        n %= a[index];
        index--;
    }
    return count;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << money(a, n) << endl;
    }
} 
