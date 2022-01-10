#include <bits/stdc++.h>
using namespace std;
 
int n;
string a, b;
 
void init()
{
    cin >> n >> a >> b;
}
 
void process()
{
    int count = 0;
    if (a.size() < b.size()) {
        while (a.size() != b.size()) {
            b.pop_back();
            count++;
        }
        while (a != b) {
            a.pop_back();
            b.pop_back();
            count += 2;
        }
        if (count <= n) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
    else if (a.size() == b.size()) {
        while (a != b) {
            a.pop_back();
            b.pop_back();
            count += 2;
        }
        if (count <= n) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
    else {
        while(a.size() != b.size()) {
            a.pop_back();
            count++;
        }
        while (a != b) {
            a.pop_back();
            b.pop_back();
            count += 2;
        }
        if (count <= n) {
            cout << "YES";
        }
        else {
            cout << "NO";
        }
    }
}
 
int main()
{
    init();
    process();
} 
