#include <iostream>
using namespace std;

int main(void)
{
	int a[7] = {0, 500, 300, 200, 50, 30, 10};
	int b[6] = {0, 512, 256, 128, 64, 32};
	int n;
	int c, d;
	long long int result;
	cin >> n;
	for (int i =0; i<n; i++)
	{
		cin >> c >> d;
		if (c==0) result = 0;
		else if (c==1) result = a[1];
		else if (c <=3) result = a[2];
		else if (c <=6) result = a[3];
		else if (c <=10) result = a[4];
		else if (c <=15) result = a[5];
		else if (c <=21) result = a[6];
		else result = a[0];
		if (d==0) result += 0;
		else if (d == 1) result += b[1];
		else if (d <=3) result += b[2];
		else if (d <=7) result += b[3];
		else if (d <=15) result += b[4];
		else if (d <=31) result += b[5];
		else result += b[0];
		result *= 10000;
		cout << result << "\n";
	}
	return (0);
}