#include <bits/stdc++.h>
using namespace std;
 
int n;
void process()
{
    cin >> n;
    int tu = n % 360;
    int mau = 180;
    int tmp = __gcd(tu, mau);
    tu /= tmp;
    mau /= tmp;
    if (tu == 0)
        cout << "0$";
    else
    {
        if (tu == 1)
        {
            if (mau == 1)
                cout << "$";
            else
                cout << "$/" << mau;
        }
        else
            cout << tu << "$/" << mau;
    }
    cout << endl;
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        process();
        cout << endl;
    }
} 
