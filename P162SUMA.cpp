#include <bits/stdc++.h>
using namespace std;
 
vector<int> a(6);
vector<int> b(10, 0);
vector<int> c;
void init() {
    for (int i = 0; i < 6; i++) {
        cin >> a[i];
        b[a[i]]++;
    }
}
 
void process() {
    int tick = 0;
    for (int i = 1; i < 10; i++) {
        if(b[i] >= 4) {
            tick = 1;
            b[i] -= 4;
        }
    }
    if (tick) {
        int l = 0, r = 9;
        while(b[l] == 0) l++;
        while(b[r] == 0) r--;
        if (l < r) {
            cout << "Bear"; 
            return;    
        }
        else {
            cout << "Elephant";        
            return;
        }
    }
    cout << "Alien";
}
 
int main() {
    init();
    process();
} 
