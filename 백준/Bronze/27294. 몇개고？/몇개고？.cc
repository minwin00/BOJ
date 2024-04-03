#include <iostream>
using namespace std;

int main(void)
{
	int a, b;
	cin >> a >> b;
	if (!b && (a >= 12 && a<= 16))
		cout << 320;
	else cout << 280;
	return (0);
}