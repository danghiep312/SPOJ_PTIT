#include <iostream>
using namespace std;
 
long long GCD(long long a, long long b){
    while (a * b != 0){
        if (a > b){
     	    a %= b;
        }
        else{
        	b %= a;
        }
    }
    return a + b;
}
 
long long LCM(long long a, long long b){
	return a*b/GCD(a,b);
}
 
int main(){
	int t;
	cin >> t;
	while(t--){
		long long a,b;
		cin >> a >> b;
		cout << LCM(a,b) << " " << GCD(a,b) << endl;
	}
} 
