#include <iostream>
using namespace std;

int main(void)
{
	int n, a;
	int r;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		r = 1;
		cin >> a;
		for (int j = 1; j<=a; j++){
			r = r*j%10;
		}
		cout << r << "\n";
	}
	return (0);
}