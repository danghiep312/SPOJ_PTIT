#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef double ld;
 
const double pi=2*acos(0);
const ll nmax=1e7+7; 
 
 
void sangUoc(vector<long> &a){
	for(long i=1;i<=nmax;i++){
		a[i]-=i;
        for(long j=1;j<=nmax/i;j++){
            a[i*j]+=i;
        }
    }
}
 
int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(NULL);cout.tie(NULL);
	vector<long> a(nmax,0);
	long aa,b;
	cin>>aa>>b;
	sangUoc(a);
	ll s=0;
	for (long i=aa;i<=b;i++){
		s+=abs(a[i]-i);
	}
	cout<<s;
	
return 0;
} 
