#include <bits/stdc++.h>
using namespace std;
 
struct Data
{
    int score, index;
};
 
vector<Data> a, b;
int n;
 
bool cmp(Data x, Data y)
{
    return x.score > y.score;
}
 
void init()
{
    a.resize(n);
    b.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].score;
        a[i].index = i + 1;
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i].score;
        b[i].index = i + 1;
    }
    sort(a.begin(), a.end(), cmp);
    sort(b.begin(), b.end(), cmp);
}
 
void process() {
    for (int i = 0; i < n; i++) {
        if (a[i].index != b[i].index) {
            cout << i + 1;
            return;
        }
    }
    cout << "agree";
}
 
int main() {
    int k = 1;
    while (cin >> n) {
        init();
        cout << "Case " << k++ << ": ";
        process();
        cout << endl;
    }
}
 
