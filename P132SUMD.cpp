#include <bits/stdc++.h>
using namespace std;                                                       
 
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b + c) cout << a << "=" << b << "+" << c;
    else if (a == b - c) cout << a << "=" << b << "-" << c;
    else if (a == b * c) cout << a << "= " << b << "*" << c;
    else if ((c != 0) && (a == b/c)) cout << a << "=" << b << "/" << c;
    else if (a + b == c) cout << a << "+" << b << "=" << c;
    else if (a - b == c) cout << a << "-" << b << "=" << c;
    else if (a*b == c) cout << a << "*" << b << "=" << c;
    else if ((b != 0) && (a/b == c)) cout << a << "/" << b << "=" << c;
}                                                                                                                                  
