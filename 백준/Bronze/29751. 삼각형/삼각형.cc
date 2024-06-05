#include <iostream>
#include <iomanip>
using namespace std;

int main(void)
{
	double a, b;
	cin >> a >> b;
	cout <<fixed << setprecision(1)<< a*b*0.5;
	return (0);
}