#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string tmp = "+------------------------+";
    int n;
    cin >> n;
    char s[100][100];
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 27; j++) {
            if (j % 2 == 0) {
                s[i][j] = '#';
            }
            else s[i][j] = '.';
        }
    }
    for (int i = 1; i <= 4; i++) {
        s[i][1] = '|';
        s[i][26] = '|';
        s[i][24] = '|';
    }
    s[3][24]='.';
	s[1][25]='D';
	s[1][27]=')';
	s[4][27]=')';
	s[2][27]=' ';
	s[3][27]=' ';
    for (int i = 3; i <= 25; i++) {
        s[3][i] = '.';
    }
    vector<int> cot;
    vector<int> hang;
    for (int i = 1; i <= 27; i++) {
        for (int j = 1; j <= 4; j++) {
            if(s[j][i] == '#') {
                cot.push_back(i);
                hang.push_back(j);
            }
        }
    }
 
    int i = 0;
    int j = 0;
    while(n--) {
        s[hang[i++]][cot[j++]] = 'O';
    }
 
    cout << tmp << endl;
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 27; j++) {
            cout << s[i][j];
        }
        cout << endl;
    }
    cout << tmp;
} 
