#include <iostream>
using namespace std;

int main(void)
{
	int t, o, p;
	cin >> t >> o >> p;
	int x = t- o;
	int np = t - p;
	if( p > o) p = o;
	if (np > x) np = x;
	cout << np + p;
	return (0);
}