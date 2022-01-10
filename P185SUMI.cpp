#include <bits/stdc++.h>
using namespace std;
 
int n;
 
bool checkSqr(int k)
{
    int x = sqrt(k);
    if (x * x == k)
        return true;
    else
        return false;
}
 
void process()
{
    cin >> n;
    for (int i = sqrt(n); i >= 1; i--) {
        if (n % (i*i) == 0) {
            cout << i << " " << n/(i*i);
            return;
        }
    }
    cout << 1 << " " << n;
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        process();
        cout << endl;
    }
} 
