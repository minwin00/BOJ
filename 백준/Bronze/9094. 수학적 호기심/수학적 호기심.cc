#include <iostream>
using namespace std;

int main(void)
{
	int t;
	int n, m;
	int cnt;
	cin >> t;
	for (int i = 0; i<t; i++)
	{
		cnt = 0;
		cin >> n >> m;
		for (int j = 1; j<n; j++)
		{
			for (int k = j+1; k<n; k++)
			{
				if((j*j+k*k+m)%(j*k) == 0) cnt++;
			}
		}
		cout << cnt << "\n";
	}
	return (0);
}