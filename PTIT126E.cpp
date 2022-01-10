#include <bits/stdc++.h>
using namespace std;
 
string a;
 
int main() {
    string a;
    while (1) {
        cin >> a;
        if (a[0] == '#') return 0;
        int cN = 0, cY = 0, cP = 0, cA = 0;
        for (int i = 0; i < a.size(); i++) {
            switch (a[i]) {
                case 'A': cA++;
                    break;
                case 'Y': cY++;
                    break;
                case 'P': cP++;
                    break;
                case 'N': cN++;
                    break;
            }
        }
        if (cA >= (float) a.size()/2) {
            cout << "need quorum";
        }
        else if (cY > cN) {
            cout << "yes";
        }
        else if (cY == cN) {
            cout << "tie";
        }
        else {
            cout << "no";
        }
        cout << endl;
    }
} 
