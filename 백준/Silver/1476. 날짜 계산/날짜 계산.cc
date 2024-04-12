#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >>c;
	while (1)
	{
		while (b > c)
		{
			c+= 19;
		}
		while (b > a)
		{
			a+= 15;
		}
		if (a==b && b == c)
		{
			cout << a;
			return (0);
		}
		else b+= 28;
	}
	return (0);
}