#include<bits/stdc++.h>
using namespace std;
 
struct Team {
    string name;
    int score;
};
 
bool cmp(Team x, Team y) {
    if (x.score == y.score) {
        return x.name < y.name;
    }
    return x.score > y.score;
}
 
vector<Team> a;
int n;
string s1, s2;
 
void init() {
    cin >> n >> s1 >> s2;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i].name >> a[i].score;
    }
}
 
void process() {
    //TH1: win
    for (int i = 0; i < n; i++) {
        if (s1 == a[i].name) {
            a[i].score += 3;
        }
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < n; i++) {
        if (s1 == a[i].name){
        cout << i + 1 << " ";
        a[i].score -= 3;
        }
    }
    //TH2: lose
    for (int i = 0; i < n; i++) {
        if (a[i].name == s2) {
            a[i].score += 3;
        }
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < n; i++) {
        if (a[i].name == s1) {
            cout << i + 1 << " ";
        }
        if (a[i].name == s2) {
            a[i].score -= 3;
        }
    }
    //TH3: draw
    for (int i = 0; i < n; i++) {
        if (s1 == a[i].name || a[i].name == s2) {
            a[i].score++;
        }
    }
    sort(a.begin(), a.end(), cmp);
    for (int i = 0; i < n; i++) {
        if (s1 == a[i].name) {
            cout << i + 1 << endl;
            a[i].score--;
        }
    }
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        init();
        process();
    }
} 
