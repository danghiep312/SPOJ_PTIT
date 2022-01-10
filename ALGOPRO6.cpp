#include <bits/stdc++.h>
#include <string.h>
 
using namespace std;
 
int sum_num (int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
 
int checkLeapYear (int n) {
    if (n % 400 == 0) {
        return 1;
    } 
    if (n % 4 == 0 && n % 100 != 0) {
        return 1;
 
    }
    return 0;
}
 
int main() {
    int k;
    int sum = 0;
    for (int i = 1; i <= 12; i++) {
        if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
            k = 31;
        }
        else if (i == 2) {
            k = 28;
        }
        else {
            k = 30;
        }
        for (int j = 1; j <= k; j++) {
            sum += (sum_num(i) + sum_num(j));
        }
    }
    
    int n;
    cin >> n;
    if (checkLeapYear(n) == 1) {
        sum += 366*sum_num(n) + 13;
    }
    else {
        sum += 365*sum_num(n);
    }
    cout << sum;
}
 
//2048 
 
