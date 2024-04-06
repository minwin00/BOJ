#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int a, b, c, d;
	int ta, tb, tc, td;
	cin >> n;
	for (int i =0; i<n; i++)
	{
		cin >> a >> b >> c >> d >> ta >> tb >> tc >> td;
		a += ta;
		b += tb;
		c += tc;
		d += td;
		if (a < 1) a = 1;
		if (b<1) b = 1;
		if(c < 0) c = 0;
		cout << a + 5*b +2*c+2*d << "\n";
	}
	return (0);
}