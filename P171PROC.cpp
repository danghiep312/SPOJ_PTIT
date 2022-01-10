#include <bits/stdc++.h>
using namespace std;
 
double dmax(double a, double b)
{
    return (a > b) ? a : b;
}
 
int main()
{
    double n, l, rmin = 0;
    vector<double> a;
    cin >> n >> l;
    for (int i = 0; i < n; i++)
    {
        double tmp;
        cin >> tmp;
        a.push_back(tmp);
    }
    sort(a.begin(), a.end());
    double smax = -1.0;
    for (int i = 1; i < a.size() - 1; i++)
    {
        smax = dmax(smax, (a[i] - a[i - 1]) / 2);
    }
    smax = dmax(smax, a[0]);
    smax = dmax(smax, l - a[a.size() - 1]);
    cout << fixed << setprecision(10) << smax;
} 
