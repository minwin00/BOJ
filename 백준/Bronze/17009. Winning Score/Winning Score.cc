#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	if (3*a+2*b+c > 3*d+2*e+f)
		cout << "A";
	else if (3*a+2*b+c < 3*d+2*e+f)
		cout << "B";
	else cout << "T";
	return (0);
}