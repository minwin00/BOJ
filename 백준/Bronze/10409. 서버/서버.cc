#include <iostream>
using namespace std;

int main(void)
{
	int n, t;
	cin >> n >> t;
	int  a, temp= 0;
	int count = 0;
	for (int i = 0; i<n; i++)
	{
		cin >> a;
		temp += a;
		if (temp <= t) count ++;
	}
	cout << count;
	return (0);
}