#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
bool stop = true;
bool checkNum (string a) {
    int k = 0;
    if (a[0] == '-') {
        k++;
    }
    for (int i = k; i < a.size(); i++) {
        if (a[i] < '0' || a[i] > '9') return false;
    }
    return true;
}
 
 
ll strToNum(string a) {
    bool check = false;
    int k = 0;
    if (a[0] == '-') {
        k++;
        check = true;
    }
    ll sum = 0;
    for (int i = k; i < a.size(); i++) {
        sum = sum*10 + (a[i] - 48);
    }
    if (check) return -sum;
    return sum;
}
 
void process() {
    vector<string> a; // luu cac tu
    vector<ll> b;   // luu cac so
    vector<int> dd;  // index cua so
    string x;
    for (int i = 0; ; i++) {
        cin >> x;
        if (x[0] == '.') {
            stop = false;
            return;
        }
        char tmp = x[x.size() - 1];
        x.pop_back();
        if (checkNum(x)) {
            b.push_back(strToNum(x));
            dd.push_back(1);
        }
        else {
            a.push_back(x);
            dd.push_back(0);
        }
        if (tmp == '.') break;
    }
 
    if (a.size() != 0) {
        sort (a.begin(), a.end());
    }
    if (b.size() != 0) {
        sort (b.begin(), b.end());
    }
    int h = 0, k = 0;
    for (int i = 0; i < a.size() + b.size(); i++) {
 
        if (dd[i]) {
            cout << b[h];
            h++;
        }
        else {
            cout << a[k];
            k++;
        }  
        if (i != a.size() + b.size() - 1) {
            cout << ", ";
        }
        else {
            cout << ".";
        }
    }
    cout << endl;
}
 
int main() {
    while (stop) {
        process();
    }
} 
