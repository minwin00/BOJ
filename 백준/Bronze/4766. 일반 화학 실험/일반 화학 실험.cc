#include <iostream>
using namespace std;

int main(void)
{
	double a;
	cin >> a;
	cout << fixed;
	double temp = a;
	while (1){
		cin >> a;
		if (a == 999) break;
		
		cout.precision(2);
		cout << (a-temp) << "\n";
		temp = a;
	}
	return (0);
}