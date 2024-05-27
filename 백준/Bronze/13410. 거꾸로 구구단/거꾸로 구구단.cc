#include <iostream>
using namespace std;

int main(void)
{
	int a, b;
	int temp;
	int tt;
	int mx =0;
	cin >> a >> b;
	for (int i= 1; i<=b;i++)
	{
		temp = a*i;
		tt =0;
		while(temp){
			tt = tt*10 + temp%10;
			temp/=10;
		}
		if (tt > mx) mx = tt;
	}
	cout << mx;
	return (0);
}