#include <iostream>
using namespace std;

int main(void)
{
	int a , x, b, y, t;
	int ra , rb;
	cin >> a >> x >>b >> y >> t;
	if (t > 30)
	{
		ra = a + (t-30)*x*21;
	}
	else ra = a;
	if (t > 45) rb = b + (t-45)*y*21;
	else rb = b;
	cout << ra << " " << rb;
	return (0);
}
