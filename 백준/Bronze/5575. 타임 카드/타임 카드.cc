#include <iostream>
using namespace std;

void cal(int a, int b, int c, int d, int e, int f)
{
	int temp = (-a*3600-b*60-c + d*3600 + e*60 + f);
	cout << temp /3600 << " ";
	temp %= 3600;
	cout << temp /60 << " ";
	cout << temp % 60 << "\n";
}

int main(void)
{
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;
	cal(a, b, c, d, e, f);
	cin >> a >> b >> c >> d >> e >> f;
	cal(a, b, c, d, e, f);
	cin >> a >> b >> c >> d >> e >> f;
	cal(a, b, c, d, e, f);
	return(0);
}