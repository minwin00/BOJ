#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << (b*a*(a+1)/2+c*a*(a+1)*(2*a+1)/6);
	return (0);
}