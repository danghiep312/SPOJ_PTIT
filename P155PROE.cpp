#include<iostream>
using namespace std;
 
int main()
{
    int tmp1 = 0, tmp2 = 0;
    char a, b;
    cin >> a >> b;
    if(a == '0') tmp1 += 2;
    if(a == '1') tmp1 += 7;
    if(a == '2') tmp1 += 2;
    if(a == '3') tmp1 += 3;
    if(a == '4') tmp1 += 3;
    if(a == '5') tmp1 += 4;
    if(a == '6') tmp1 += 2;
    if(a == '7') tmp1 += 5;
    if(a == '8') tmp1 += 1;
    if(a == '9') tmp1 += 2;
    if(b == '0') tmp2 += 2;
    if(b == '1') tmp2 += 7;
    if(b == '2') tmp2 += 2;
    if(b == '3') tmp2 += 3;
    if(b == '4') tmp2 += 3;
    if(b == '5') tmp2 += 4;
    if(b == '6') tmp2 += 2;
    if(b == '7') tmp2 += 5;
    if(b == '8') tmp2 += 1;
    if(b == '9') tmp2 += 2;
    cout << tmp1*tmp2;
} 
