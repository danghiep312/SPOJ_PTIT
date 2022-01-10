#include <bits/stdc++.h>
using namespace std ;
 
int cal (vector<int> a, int l, int r){
    int res = a[l] | a[l+1];
    for(int i = l + 2 ; i < r; i ++ ){
        res = res | a[i] ;
    }
    return res ;
}
 
int main(){
    int n ;
    cin >> n ;
    vector<int> a, b;
    a.resize(n);
    b.resize(n);
 
    for(int i = 0; i < n; i ++ ){
        cin >> a[i] ;
    }
 
    for(int i = 0; i < n; i ++ ){
        cin >> b[i] ;
    }
 
    int _max = cal(a,0,n) + cal(b,0,n) ;
 
    cout << _max << endl ;
 
    return 0 ;
}
 
