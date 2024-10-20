#include <iostream>
using namespace std;

int main(void){
	int n;
	double a, b, c, d;
	double pi = 3.14159265;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a >>b >> c >> d;
		b/=a;
		d /= c*c*pi;
		if (b > d ) cout << "Whole pizza\n";
		else cout << "Slice of pizza\n";
	}
	return 0;
}