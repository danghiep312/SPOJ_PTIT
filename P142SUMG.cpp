#include <bits/stdc++.h>
using namespace std;
 
int COUNT[100];
 
void init() {
    for (int i = 65; i <= 90; i++) {
        COUNT[i] = 0;
    }
}
 
 
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int cMax = 0;
        string a;
        getline(cin, a);
        init();
        for (int i = 0; i < a.size(); i++) {
            COUNT[a[i]]++;
        }
        for (int i = 65; i <= 90; i++) {
            cMax = COUNT[i] > cMax ? COUNT[i] : cMax;
        }
        int countt = 0;
        char tmp;
        for (int i = 65; i <= 90; i++) {
            if (COUNT[i] == cMax) {
                tmp = i;
                countt++;
                if (countt > 1) break;
            }
        }
        if (countt != 1) cout << "NOT POSSIBLE" << endl;
        else {
            int d;
			if (tmp >= 'E' && tmp <= 'Z')
				d = tmp - 'E';
			else if (tmp >= 'A' && tmp < 'E')
				d = 5 - ('E' - tmp) + 21;
			cout << d << " ";
			for (int i = 0; i < a.size(); i++)
			{
				if (a[i] >= 'A' && a[i] <= 'Z')
				{
					int tmp_move = a[i] - d;
					if (tmp_move >= 65)
					{
						char c = tmp_move;
						cout << c;
					}
					else
					{
						tmp_move = 65 - tmp_move;
						char c = 91 - tmp_move;
						cout << c;
					}
				}
				else
					cout << ' ';
			}
			cout << endl;
            
        }
    }
} 
