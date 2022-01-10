#include <bits/stdc++.h>
using namespace std;
int a, b, c, d;
int ng[3];
vector<int> dd (1003, 0);
void init() {
    cin >> a >> b >> c >> d;
    cin >> ng[0] >> ng[1] >> ng[2];
}
 
void process() {
    bool flag = true;
    int count = 0;
    for (int i = 1; i <= 1003; i++) {
        if (flag) {
            dd[i]++;
            count++;
            if (count == a) {
                count = 0;
                flag = false;
            }
        }
        else {
            count++;
            if (count == b) {
                count = 0;
                flag = true;
            }
        }
    }
    count = 0;
    flag = true;
    for (int i = 1; i <= 1003; i++) {
        if (flag) {
            dd[i]++;
            count++;
            if (count == c) {
                count = 0;
                flag = false;
            }
        }
        else {
            count++;
            if (count == d) {
                count = 0;
                flag = true;
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        if (dd[ng[i]] == 2) {
            cout << "both" << endl;
        }
        if (dd[ng[i]] == 1) {
            cout << "one" << endl;
        }
        if (dd[ng[i]] == 0) {
            cout << "none" << endl;
        }
    }
}
 
int main() {
    init();
    process();
} 
