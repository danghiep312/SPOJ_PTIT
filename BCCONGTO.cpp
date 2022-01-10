#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    while (1) {
        string num;
        cin >> num;
        if (num == "0") {
            break;
        }
        cout << num << ":";
        
        long long sum = 0;
        for (int i = 0; i < num.size(); i++) {
            num[i] -= 48;
            if (num[i] > 4) num[i]--;
            sum = sum*9 + num[i];
        }
        cout << " " << sum << endl;
    }
} 
