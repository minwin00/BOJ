#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c, d;
	int result = 0;
	cin >> a >> b >> c >>d;
	a-= 1;
	result += d*c*(a/b);
	cout << result;
	return (0);
}