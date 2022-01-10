#include <iostream>
using namespace std;
 
#define e 1000000007
 
long long pow(long long a, long long b) {
    if (b == 0) return 1;
    if (b % 2 == 0) {
        long long p = pow(a, b/2);
        return (p*p) % e;
    }
    else {
        long long p = pow(a, b - 1);
        return (p*a) % e;
    }
}
 
int main() {
    while (1) {
        long long a, b;
        cin >> a >> b;
        if (a == 0 && b == 0) {
            return 0;
        }
        else {
            cout << pow(a,b) << endl;
        }
    }
} 
