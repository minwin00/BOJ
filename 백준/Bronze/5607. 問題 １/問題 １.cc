#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int a, b;
	int ra=0, rb=0;
	cin >> n;
	for (int i =0; i<n; i++)
	{
		cin >> a >> b;
		if (a>b) ra += a+b;
		else if (a<b) rb += a+b;
		else ra += a, rb += b;
	}
	cout << ra << " " << rb;
	return (0);
}