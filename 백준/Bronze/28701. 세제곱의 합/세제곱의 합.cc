#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int r1 = 0, r2 = 0;
	for (int i = 1 ; i<=n; i++)
	{
		r1 += i;
		r2 += i*i*i;
	}
	cout << r1 << "\n" << r1*r1 << "\n" << r2;
	return (0);
}