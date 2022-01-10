#include <bits/stdc++.h>
using namespace std;
 
int n;
vector<int> dd(3, 0);
bool flag = true;
 
void process() {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int tmp;
        cin >> tmp;
        if (tmp == 25) {
            dd[0]++;
        }
        if (tmp == 50) {
            dd[1]++;
            if (dd[0] > 0) {
                dd[0]--;
            }
            else {
                flag = false;
            }
        }
        if (tmp == 100) {
            if (dd[1] > 0 && dd[0] != 0) {
                dd[1]--;
                dd[0]--;
            }
            else if (dd[1] == 0 && dd[0] >= 3) {
                dd[0] -= 3;
            }
            else {
                flag = false;
            }
        }
    }
    if (flag) cout << "YES";
    else cout << "NO";
}
 
int main() {
    process();
} 
