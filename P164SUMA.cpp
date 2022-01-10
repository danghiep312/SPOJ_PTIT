#include <bits/stdc++.h>
using namespace std;
 
struct Data {
    string name;
    int score;
};
 
Data a[2];
int n;
 
void init() {
    a[0].score = 1;
    a[1].score = 0;
    a[1].name = "";
    cin >> n;
    string tmp;
    cin >> tmp;
    a[0].name = tmp;
    for (int i = 0; i < n - 1; i++) {
        cin >> tmp; 
        if (tmp != a[0].name) {
            if (a[1].score == 0) {
                a[1].name = tmp;
                a[1].score = 1;
            }
            else {
                a[1].score++;
            }
        }
        else {
            a[0].score++;
        }
    }
}
 
void process() {
    if (a[0].score > a[1].score) {
        cout << a[0].name;
    }
    else {
        cout << a[1].name;
    }
}
int main() {
    init();
    process();
} 
