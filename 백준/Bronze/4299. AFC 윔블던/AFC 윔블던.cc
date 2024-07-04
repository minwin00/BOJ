#include <iostream>
using namespace std;

int main(void){
	double a, b;
	double c, d;
	cin >> a>>b;
	c= (a+b)/2;
	d = (a-b)/2;
	if (c<0 || d<0 || int(c*100) != int(c)*100 ||int(d*100) != int(d)*100)
		cout << -1;
	else cout << c << " " << d;
	return 0;
}