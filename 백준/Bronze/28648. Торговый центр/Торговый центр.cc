#include <iostream>
using namespace std;

int main(void){
	int n;
	int a, b;
	int m = 99999999;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a >> b;
		a+=b;
		if (m>a) m = a;
	}
	cout << m;
	return 0;
}