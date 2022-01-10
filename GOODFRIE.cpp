#include <bits/stdc++.h>
using namespace std;
 
struct SV {
    string name;
    int dp[21];
};
 
vector<SV> a;
int n, k;
long long res = 0;
void init() {
    cin >> n >> k;
    SV tmp;
    tmp.name = "";
    for (int i = 1; i <= 20; i++) {
        tmp.dp[i] = 0;
    }
    a.push_back(tmp);
    for (int i = 0; i < n; i++) {
        SV tmp;
        cin >> tmp.name;
        if (i != 0) {
            for (int j = 1; j <= 20; j++) {
                tmp.dp[j] = a.back().dp[j];
            }
            tmp.dp[tmp.name.size()]++;
        }
        else {
            for (int j = 1; j <= 20; j++) {
                tmp.dp[j] = 0;
            }
            tmp.dp[tmp.name.size()]++;
        }
        a.push_back(tmp);
    }
}
//mang a[i].dp[] chua do dai cua cac xau ten tu 0 -> i
void process() {
    for (int i = 1; i <= n; i++) {
        int len = a[i].name.size();
        if (i > k) {
            res += (a[i].dp[len] - a[i - k - 1].dp[len] - 1);
        }
        else {
            res += (a[i].dp[len] - a[0].dp[len] - 1);
        }
    }
    cout << res;
}
 
int main() {
    init();
    process();
} 
