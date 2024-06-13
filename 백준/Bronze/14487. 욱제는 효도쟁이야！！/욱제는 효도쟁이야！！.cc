#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int a;
	int result = 0;
	int mx = 0;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cin >> a;
		result += a;
		if (mx < a) mx = a;
	}
	cout << result - mx;
	return 0;
}