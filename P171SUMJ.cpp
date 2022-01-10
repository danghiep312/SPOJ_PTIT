#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
typedef double ll;
int main() {
    ll a,b,c;
    cin >> a >> b >> c;
    if(a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << -1;
            }
            else {
                cout << 0;
            }
        }
        else {
            cout << 1 << endl;
            printf("%.5lf", -c/b);
        }
    }
    else {
        ll delta = b*b - 4*a*c;
        if(delta < 0) cout << 0;
        else if (delta == 0) {
            cout << 1 << endl;
            printf("%.5lf", -b/(2*a));
        }
        else {
            cout << 2 << endl;
            ll tmp1 = (-b + sqrt(delta))/(2*a);
            ll tmp2 = (-b - sqrt(delta))/(2*a);
            if(tmp1 > tmp2) printf("%.5lf\n%.5lf", tmp2, tmp1);
            else printf("%.5lf\n%.5lf", tmp1, tmp2);
        }
    }
} 
