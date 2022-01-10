#include <bits/stdc++.h>
#define ALPHAA "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
using namespace std;
typedef long long ll;
ll n,k;
string ALPHA = ALPHAA;
string s;
ll dem[26] = {0};
ll res = 0;
 
void init(){
	cin>>n>>k>>s;
}
 
void process(){
	for (int i=0;i<s.length();i++){
		for (int j=0;j<ALPHA.length();j++){
			if (s[i] == ALPHA[j]){
				dem[j]++;
				break;
			}
		}
	}	
	priority_queue<ll> heap;
	for(int i=0;i<26;i++){
		heap.push(dem[i]);
	}
	while (heap.size()){
		if ( k == 0) break;
		ll u = heap.top();
		if (u <= k){
			res += u*u;
//			cout<<res<<" ";
			k -= u;
			heap.pop();
		}else{
			res += k*k;
			k = 0;
//			cout<<res<<" ";
		}
	}
	cout<<res;
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	init();
	process();
 
return 0;
} 
