#include <bits/stdc++.h>
using namespace std;
 
//1! = 0! = 1
//2! = 2!
//3! = 3!
//4! = 3! * 2! * 2!
//5! = 5!
//6! = 5! * 3!
//7! = 7!
//8! = 7! * 2! * 2! * 2!
//9! = 7! * 3! * 3! * 2!
 
string a;
int n;
vector<int> b(10);
 
void init() {
    cin >> n >> a;
    for (int i = 0; i < n; i++) {
        switch (a[i]) {
            case '2': b[2]++;
                break;
            case '3': b[3]++;
                break;
            case '4': {
                b[2] += 2;
                b[3]++;
                break;
            }
            case '5': b[5]++;
                break;
            case '6': {
                b[5]++;
                b[3]++;
                break;
            }
            case '7': b[7]++;
                break;
            case '8': {
                b[7]++;
                b[2] += 3;
                break;
            }
            case '9': {
                b[7]++;
                b[3] += 2;
                b[2]++;
                break;
            }
        }
    }
}
 
void process() {
    for (int i = 9; i >= 2; i--) {
        while(b[i]) {
            cout << i;
            b[i]--;
        }
    }
    cout << endl;
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        init();
        process();
    }
} 
