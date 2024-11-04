#include <iostream>
using namespace std;

int main(void){
	int a, b;
	int t;
	cin >> a >> b;
	if(a==b){
		cout << a+b;
		return 0;
	}
	if (a < b) {
		t = a;
		a = b;
		b = t;
	}
	cout << b*2+1;
	return 0;
}