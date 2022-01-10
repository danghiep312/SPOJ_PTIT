#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
vector<int> dd(26, 0);
string a;
int countt = 0, sum = 0;
 
void init() {
    cin >> a;
    for (int i = 0; i < a.size(); i++) {
        dd[a[i] - 97]++;
    }
    for (int i = 0; i < 26; i++) {
        if (dd[i] != 0) {
            countt++;
            sum += (dd[i] + 1);
        }
    }
}
 
void process() {
    ll res = (a.size() + 1)*26;
    cout << res + countt - sum;
}
 
int main() {
    init();
    process();
} 
