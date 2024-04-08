#include <iostream>
using namespace std;

int main(void)
{
	long long int n, m;
	long long int a, b, c, d;
	long long int temp;

	cin >> n>> m;
	if (n < m) {
		temp = n;
		n = m;
		m = temp;
	}
	a = n/2;
	b = n%2;
	c = m/2;
	cout << a * m + b*c; 
	return (0);
}