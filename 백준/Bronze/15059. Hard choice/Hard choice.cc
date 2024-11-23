#include <iostream>
using namespace std;

int main(void){
	int a, b, c;
	int x, y, z;
	int res = 0;
	cin >> a >> b >> c >> x >> y >> z;
	x-=a;
	y-=b;
	z-=c;
	if (x>0) res+=x;
	if (y>0) res+=y;
	if (z>0) res+=z;
	cout << res;
	return 0;
}