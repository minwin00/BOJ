#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	double a, b, c;
	long long int result;
	cin >> a >> b >> c;
	result = ceil(a/c) * ceil(b/c);
	cout << result;
	return (0);
}