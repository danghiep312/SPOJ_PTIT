#include <bits/stdc++.h>
using namespace std;
 
struct Data
{
    int time;
    char c;
};
 
int n, k;
vector<Data> a;
int Next[9] = {0, 2, 3, 4, 5, 6, 7, 8, 1};
void init()
{
    cin >> k >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].time >> a[i].c;
    }
}
 
void process()
{
    int timeLeft = 210;
    int loser, check = 0;
    for (int i = 0; i < n; i++) {
        if (check == 0) {
            if (timeLeft > a[i].time) {
                timeLeft -= a[i].time;
                loser = k;
                if (a[i].c == 'T') k = Next[k];
            }
            else {
                loser = k;
                check = 1;
            }
        }
    }
    cout << loser;
}
 
int main() {
    init();
    process();
} 
