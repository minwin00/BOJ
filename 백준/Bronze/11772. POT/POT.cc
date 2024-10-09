#include <iostream>
using namespace std;

int main(void){
	int n;
	int a, s= 0;
	int t, t2;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a;
		t = a%10;
		a/=10;
		t2=1;
		for (int i=0; i<t; i++){
			t2 *= a;
		}
		s += t2;
	}
	cout << s;
	return 0;
}