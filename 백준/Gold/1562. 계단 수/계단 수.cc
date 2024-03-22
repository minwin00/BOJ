#include <iostream>
#include <cmath>
#define MAX 1000000000
using namespace std;

int d[101][10][1024];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int b;
	int result = 0;
	cin >> n;
	for (int j = 1; j<= 9; j++)
	{
		b = 1 << j;
		d[1][j][b] = 1;
	}
	for (int i = 2; i<=n; i++)
	{
		for (int j = 0; j<=9; j++)
		{
			b = 1 << j;
			for (int k = 0; k<1024; k++)
			{
				if (j == 0)
				{
					d[i][j][b|k] += d[i-1][j+1][k] % MAX;
				}
				else if (j == 9)
				{
					d[i][j][b|k] += d[i-1][j-1][k] % MAX;
				}
				else
				{
					d[i][j][b|k] += (d[i-1][j+1][k] + d[i-1][j-1][k]) % MAX;
				}
				d[i][j][b|k] %= MAX;
			}
		}
	}
	for (int j = 0; j<=9; j++)
	{
		result = (result + d[n][j][1023]) % MAX;
	}
	cout << result;
	return (0);
}