#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int a, b;
	int y_min=999999, x_min=999999, y_max=-999999, x_max=-999999;
	cin >>n;
	for (int i = 0; i<n; i++)
	{
		cin >> a >> b;
		if (x_min > a) x_min = a;
		if (x_max < a) x_max = a;
		if (y_min > b) y_min = b;
		if (y_max < b) y_max = b;
	}
	if (n < 2){
		cout << 0; 
		return (0);
	}
	cout << (x_max - x_min) * (y_max - y_min);
	return (0);
}