#include <bits/stdc++.h>
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);
	string s;
	cin >> s;
	string gio = "", phut = "", giay = "", time = "";
	for (int i = 0; i <= 1; i++) gio += s[i];
	for (int i = 3; i <= 4; i++) phut += s[i];
	for (int i = 6; i <= 7; i++) giay += s[i];
	for (int i = 8; i <= 9; i++) time += s[i];
	if (time == "AM"){
		if (gio == "12") gio = "00";
		cout << gio << ":" << phut << ":" << giay;
	}
	else{
		if (gio == "01") gio = "13";
		if (gio == "02") gio = "14";
		if (gio == "03") gio = "15";
		if (gio == "04") gio = "16";
		if (gio == "05") gio = "17";
		if (gio == "06") gio = "18";
		if (gio == "07") gio = "19";
		if (gio == "08") gio = "20";
		if (gio == "09") gio = "21";
		if (gio == "10") gio = "22";
		if (gio == "11") gio = "23";	
		cout<< gio << ":" << phut << ":" << giay;	
	}
    return 0;
} 
