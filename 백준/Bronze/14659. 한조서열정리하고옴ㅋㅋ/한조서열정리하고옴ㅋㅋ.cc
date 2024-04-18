#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int a;
	int count;
	int temp;
	int result = 0;
	cin >> n;
	temp = -1;
	for (int i = 0; i<n; i++)
	{
		cin >> a;
		if (temp > a) count ++;
		else {
			temp = a;
			count = 0;
		}
		result = (result < count ? count : result);
	}
	cout << result;
	return (0);
}