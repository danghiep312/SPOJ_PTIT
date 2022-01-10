#include <bits/stdc++.h>
using namespace std;
 
void paint(int n)
{
    int k = n;
    for (int i = 0; i <= n; i++) // nua tren
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = i - 1; j >= 0; j--)
        {
            cout << j;
            if (j != 0)
                cout << " ";
        }
        cout << endl;
    }
 
    for (int i = n - 1; i >= 0; i--) // nua duoi
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << j << " ";
        }
        for (int j = i - 1; j >= 0; j--)
        {
            cout << j;
            if (j != 0)
                cout << " ";
        }
        cout << endl;
    }
}
 
int main()
{
    int n;
    cin >> n;
    paint(n);
} 
