#include <iostream>
using namespace std;
 
 long long factorial ( int n) {
    if (n > 1) return factorial(n - 1) * n;
    else return 1;
}
 
int main() {
    int n;
    while (true) {
        cin >> n;
        if (n == 0) break;
        cout << factorial(n) << endl;
    }
 
    return 0;
} 
