#include <iostream>
using namespace std;

int main(void){
	int a, b;
	int s = 0;
	cin >> a >> b;
	s=a;
	for (int i=0; i<b; i++){
		a*=10;
		s+=a;
	}
	cout << s;
	return 0;
}