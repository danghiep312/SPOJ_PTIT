#include<bits/stdc++.h>
#define faster() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
using namespace std;
typedef long long ll;
int main(){
 
	faster();
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		ll pos = 0,k;
		cin >> k;
		while( k % 2 == 0 ){
			pos++;
			k/=2;
		}
		cout << pos + 1 << endl;
	}
	return 0;
} 
