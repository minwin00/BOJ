#include <iostream>
using namespace std;

int main(void){
	int n;
	int a, b, c;
	int r =0;
	cin >> n;
	cin >> a >> b >> c;
	a < n ? r +=a : r+= n;
	b < n ? r +=b : r+= n;
	c < n ? r +=c : r+= n;
	cout << r;
	return 0;
}