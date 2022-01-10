#include <iostream>
using namespace std;
 
int main ()
{
	long long Ax, Ay;
	cin >> Ax >> Ay;
	long long Bx, By;
	cin >> Bx>> By;
	long long Cx, Cy;
	cin >> Cx >> Cy;
 
	long long CCW = (Bx - Ax)*(Cy - Ay)-(Cx - Ax)*(By - Ay);
	if (CCW == 0) cout << "TOWARDS";
	else if (CCW > 0) cout<< "LEFT";
	else cout << "RIGHT";
	return 0;
} 
