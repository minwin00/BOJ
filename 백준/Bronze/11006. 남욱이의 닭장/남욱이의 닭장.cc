#include <iostream>
using namespace std;

int main(void)
{
	int n, a, b;
	cin >> n;
	for (int i =0; i<n; i++)
	{
		cin >> a >> b;
		cout << 2*b - a << " " << a-b << "\n";
	}
	return (0);
}