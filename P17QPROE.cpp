#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
vector<ll> a;
ll n;
 
void init() {
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
 
void process() {
    int count = 0;
    int i = 0, j = n - 1;
    while (i <= j) {
        if (a[i] == a[j]) {
            i++;
            j--;
        }
        else if (a[i] > a[j]) {
            a[j - 1] += a[j];
            count++;
            j--;
        }
        else {
            a[i + 1] += a[i];
            i++;
            count++;
        }
    }
    cout << count;
}
 
int main() {
    init();
    process();
} 
