#include<bits/stdc++.h>
using namespace std;
 
struct Data {
    int day, value;
};
 
int cmp(Data x, Data y) {
    if (x.value > y.value) return 0;
	else if (x.value == y.value)
	{
		if (x.day > y.day) return 0;
	}
	return 1;
}
 
int cmp2(Data x, Data y) {
    if (x.day > y.day) return 0;
    return 1;
}
 
bool cmp3(Data x, Data y) {
    if (x.day < y.day) return 0;
    return 1;
}
 
int main() {
    int n, k1, k2;
    Data arr[1000000];
    for (int i = 1; ; i++) {
        cin >> n >> k1 >> k2;
        if (n == 0 && k1 == 0 && k2 == 0) break;
        for (int i = 0; i < n; i++) {
            cin >> arr[i].value;
            arr[i].day = i + 1;
        }
        sort(arr, arr + n, cmp);
        sort(arr, arr + k1, cmp2);
        sort(arr + (n - k2), arr + n, cmp3);
 
        cout << "Case " << i << endl;
        for (int i = 0; i < k1; i++) {
            cout << arr[i].day << " ";
        }
        cout << endl;
        for (int i = n - k2; i < n; i++) {
            cout << arr[i].day << " ";
        }
        cout << endl;
    }
    return 0;   
} 
