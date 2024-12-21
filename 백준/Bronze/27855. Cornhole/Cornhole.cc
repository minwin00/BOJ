#include <iostream>
using namespace std;

int main(void){
	int a, b, c, d;
	cin >> a >> b >>c >> d;
	a = a*3+b;
	c = c*3+d;
	if (a>c){
		cout << 1 << " " << a-c;
	}
	else if (a<c) cout << 2 << " " << c-a;
	else cout << "NO SCORE";
	return 0;
}