#include <bits/stdc++.h>
using namespace std;
 
int n;
 
void process()
{
    cin >> n;
    if (n % 7 == 0)
    {
        cout << 2 * n / 7 << " " << 2 * n / 7;
        return;
    }
    else
    {
        int week = n / 7;
        int day = n % 7;
        if (day == 6)
            cout << 2 * week + 1 << " " << 2 * week + 2;
        else if (day == 1)
            cout << 2 * week << " " << 2 * week + 1;
        else
            cout << 2 * week << " " << 2 * week + 2;
    }
}
 
int main()
{
    process();
} 
