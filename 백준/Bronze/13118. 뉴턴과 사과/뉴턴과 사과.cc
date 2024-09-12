#include <iostream>
using namespace std;

int main(void){
	long long a, b, c, d, x, y, r;
	cin >> a >> b >> c >> d >> x >> y >> r;
	if (x==a) cout << 1;
	else if (x==b) cout << 2;
	else if (x==c) cout << 3;
	else if (x==d) cout << 4;
	else cout << 0;
	return 0;
}