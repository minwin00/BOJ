#include <iostream>
using namespace std;

int main(void){
	int a, b, c;
	cin >> a >> b >> c;
	if (a+b==c || a+c==b||b+c==a) cout << 1;
	else if (a*b==c || a*c==b || b*c==a) cout << 2;
	else cout << 3;
	return 0;
}