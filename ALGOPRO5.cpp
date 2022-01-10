#include <bits/stdc++.h>
 
using namespace std;
 
long long C ( int k, int n){
    long long res = 1;
    for ( int i = 1; i <= k ; i++){
        res = res * n/i;
        n--;
    }
    return res;
}
int main() {
    int n;
    long long last = 0;
    cin >> n;
 
    for (int i = 2; i <= n; i++) {
        long long sum = 0;
        for (int j = 0; j <= i/2; j++) {
            sum += C(j, i);
        }
        if (i % 2 == 0) {
            sum = 2*sum - C(i/2,i);
        }
        else {
            sum *= 2;
        }
        last += sum;
    }
    cout << last + 2;
} 
