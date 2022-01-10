#include <bits/stdc++.h>
using namespace std;
 
int n;
vector<int> a;
 
void init()
{
    cin >> n;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
 
void process()
{
    if (n == 0)
    {
        cout << "0 0";
        return;
    }
    if (n == 1)
    {
        cout << "1 0";
        return;
    }
    int countH = 0, countL = 0;
    bool check = true;
    int i = 0, j = a.size() - 1;
    while (1)
    {
        if (i == j)
        {
            if (check)
            {
                countH++;
            }
            break;
        }
        if (i == j - 1)
        {
            countH++;
            countL++;
            break;
        }
        int tmp = min(a[i], a[j]);
        a[i] -= tmp;
        a[j] -= tmp;
        if (a[i] == 0 && a[j] == 0)
            check = true;
        else
            check = false;
        if (a[i] == 0)
        {
            i++;
            countH++;
        }
        if (a[j] == 0)
        {
            j--;
            countL++;
        }
    }
    cout << countH << " " << countL;
}
 
int main()
{
    init();
    process();
} 
