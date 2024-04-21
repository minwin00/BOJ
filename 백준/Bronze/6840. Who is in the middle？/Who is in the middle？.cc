#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a>b){
		if (b>c) cout << b;
		else if (c> a) cout << a;
		else cout << c;
	}
	else {
		if (c>b) cout << b;
		else if( a>c) cout << a;
		else cout << c;
	}
	return (0);
}