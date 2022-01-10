#include <bits/stdc++.h>
using namespace std;
 
struct Data
{
    double x, y, m, xi, yi;
};
 
vector<Data> a;
int n, t;
 
void init()
{
    cin >> n;
    if (n < 0) return;
    a.resize(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].x >> a[i].y >> a[i].m;
        a[i].xi = a[i].m * a[i].x;
        a[i].yi = a[i].m * a[i].y;
    }
}
 
void process()
{
    double sumx = 0, sumy = 0, summ = 0;
    for (int i = 0; i < n; i++)
    {
        sumx += a[i].xi;
        sumy += a[i].yi;
        summ += a[i].m;
    }
    double a = sumx / summ;
    double b = sumy / summ;
    cout << fixed << setprecision(2);
    cout << a << " " << b << endl;
}
 
int main()
{
    t = 1;
    while (1) {
        init();
        if (n < 0) return 0;
        cout << "Case " << t++ << ": ";
        process();
    }
} 
