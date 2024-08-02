#include <iostream>
using namespace std;

int gcd(int a, int b){
	if (b==0) return a;
	return gcd(b, a%b);
}

int main(void){
	int a, aa;
	int b, bb;
	int t, tt;
	int temp;
	
	cin >> a >> aa;
	cin >> b >> bb;
	tt = aa*bb/gcd(aa, bb);
	t = a*(tt/aa)+b*(tt/bb);
	temp = gcd(t, tt);
	cout << t/temp  << " " << tt/temp;
	return 0;
}