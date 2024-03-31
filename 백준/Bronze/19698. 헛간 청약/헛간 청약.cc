#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c, d;
	cin >> a >> b >>c >> d;
	int temp = (b/d) * (c/d);
	cout << ( a > temp ? temp : a);
	return (0);
}