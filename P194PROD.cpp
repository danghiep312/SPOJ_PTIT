#include<bits/stdc++.h> 
using namespace std;
 
int main(){
	int n;
	cin>>n;
	int a[n];
	int res = 0;
	for(int i=1;i<=n;i++) cin>>a[i];
	int maxx = a[1];
	int minn = a[1];
	int index_max=1;
	int index_min=1;
	for (int i=1;i<=n;i++){
		if ( a[i] > maxx ){
			maxx = a[i];
			index_max = i;  
		}
		if ( a[i] < minn ){
			minn = a[i];
			index_min = i;	
		}
	}	
	if (index_min > index_max ) swap (index_min, index_max);
	int dis_min, dis_max;
	dis_min = index_min - 1;
	dis_max = n - index_max;
	if (dis_max > dis_min){
//		dis_max = n;
		res = n- index_min;
	}
	else{
//		dis_min = 1;
		res = index_max - 1;	
	}  
	cout<<res;
return 0;
} 
