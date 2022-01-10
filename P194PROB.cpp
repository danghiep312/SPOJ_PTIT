#include<bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main(){
	int n;
	cin >> n;
	int a[n];
	int res = 0;
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
	int maxx = a[0];
	int minn = a[0];
	for (int i = 1; i < n; i++){
		maxx = max(maxx, a[i]);
		minn = min(minn, a[i]); 
	}
	int index = 0;
	for (int i = n - 1;i >= 0; i--){
		if(a[i] == maxx) index = i;
	}
	for (int i = index; i >=1 ;i--){
		swap(a[i],a[i-1]);
		res++;
	}
	for (int i = 0; i < n; i++){
		if (a[i] == minn) index = i;
	}
	for(int i = index; i < n - 1; i++){
		swap(a[i], a[i + 1]);
		res++;
	}
	cout << res;
return 0;
} 
