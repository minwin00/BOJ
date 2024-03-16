#include <iostream>
using namespace std;

int main(void)
{
	int n, m;
	int a[100][100] = {0,};
	int b[100] = {0,};
	int c[100] = {0,};
	int sum1 = 0, sum2 = 0;
	cin >> n >> m;
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<m; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = 0; i<n; i++)
	{
		b[i] = a[i][0];
		for (int j = 0; j<m-1; j++)
		{
			if (a[i][j+1] > a[i][j])
			{
				b[i] += a[i][j+1] - a[i][j];
			}
		}
	}
	for (int j = 0; j<m; j++)
	{
		c[j] = a[0][j];
		for (int i = 0; i<n-1; i++)
		{
			if (a[i+1][j] > a[i][j])
			{
				c[j] += a[i+1][j] - a[i][j];
			}
		}
	}
	for (int i = 0; i<n; i++)
	{
		sum1 += b[i];
	}
	for (int j = 0; j<m; j++)
	{
		sum2 += c[j];
	}
	cout << (n*m + sum1 + sum2) * 2;
	return (0);
}