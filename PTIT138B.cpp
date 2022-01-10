#include <bits/stdc++.h>
using namespace std;
 
struct Data {
    string fa;
    string so;
    int ageF;
    int ageS;
};
 
int x, T;
Data a[102];
 
bool check(Data a, Data b) {
    if (a.ageS == b.ageS) {
        return a.so < b.so;
    }
    return a.ageS > b.ageS;
}
 
void dequy(string s, int k) { //k la khoang cach tuoi that voi tuoi khi duoc sinh
    for (int i = 1; i <= x; i++) {
        if (s == a[i].fa) {
            if (s == "Ted") {
                a[i].ageS = 100 - a[i].ageF;
                k = 100 - a[i].ageF;
                dequy(a[i].so, k);
            }
            else {
                a[i].ageS = k - a[i].ageF;
                dequy(a[i].so, k - a[i].ageF);
            }
        }
    }
}
 
void process() {
    cin >> T;
    for (int t = 1; t <= T; t++) {
        cin >> x;
        for (int i = 1; i <= x; i++) {
            cin >> a[i].fa >> a[i].so >> a[i].ageF;
        }
        dequy("Ted", 0);
        sort(a + 1, a + 1 + x, check);
        cout << "DATASET " << t << endl;
        for (int i = 1; i <= x; i++) {
            cout << a[i].so << " " << a[i].ageS << endl;
        }
    }
}
 
 
int main() {
    process();
}
    
 
