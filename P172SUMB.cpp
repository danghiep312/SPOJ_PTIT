#include <bits/stdc++.h>
using namespace std;
 
string a;
long long res = 0;
void process(){
    cin >> a;
 
    for (int i = 0; i < a.size(); i++) {
        if ((a[i] - 48) % 4 == 0) res++;
    }
    for (int i = 0; i < a.size() - 1; i++) {
        int sum = (a[i] - '0')*10 + (a[i + 1] - '0');
        if (sum % 4 == 0) res += (i + 1);
    }
    cout << res;
}
 
int main() {
    process();
} 
