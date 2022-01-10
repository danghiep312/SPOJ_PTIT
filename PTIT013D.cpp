#include <bits/stdc++.h>
using namespace std;
 
int n;
void process()
{
    cin >> n;
    if (n == 0)
        cout << 0;
    else if (n == 1)
        cout << 1;
    else if (n == 2)
        cout << 4;
    else if (n % 2 == 0)
        cout << n * n / 2;
    else
    {
        int tmp = n / 2;
        cout << tmp * tmp + (tmp + 1) * (tmp + 1);
    }
}
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        process();
        cout << endl;
    }
} 
