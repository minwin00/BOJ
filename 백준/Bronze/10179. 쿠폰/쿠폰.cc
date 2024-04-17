#include <iostream>
#include <cmath>
using namespace std;

int main(void)
{
	int n;
	double a;
	cin >> n;
	cout << fixed;
	cout.precision(2);
	for (int i = 0; i<n; i++)
	{
		cin >> a;
		cout << "$" << (round(a*0.8*100)/100)<< "\n";
	}
	return (0);
}