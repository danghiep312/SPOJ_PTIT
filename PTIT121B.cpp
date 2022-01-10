#include <bits/stdc++.h>
#include <vector>
#include <string>
using namespace std;
int main(){
	int n, count = 2;
    cin >> n;
    vector<string> a;
    a.push_back("0");
    a.push_back("1");       
    for (int i = 1; i < n; i++) {
        for (int j = count - 1; j >= 0; j--) {
            a.push_back("1" + a[j]);
            a[j] = "0" + a[j];
        }
        count *= 2;
    }
    for (int i = 0; i < count; i++) {
        cout << a[i] << endl;
    }
} 
