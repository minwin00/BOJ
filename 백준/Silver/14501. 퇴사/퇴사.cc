#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	vector<int> v1, v2;
	int dp[1001] = {0,};
	int temp;
	int mx;
	int n;
	int a, b;
	cin >> n;
	v1.push_back(0);
	v2.push_back(0);
	for (int i = 1; i<=n; i++)
	{
		cin >> a >> b;
		v1.push_back(i+a);
		v2.push_back(b);
	}
	for (int i = 2; i<=n+1; i++)
	{
		dp[i] = dp[i-1];
		mx = dp[i];
		for (int j = 1; j<=n; j++)
		{
			if(v1[j] == i){
				temp = dp[j] + v2[j];
				if (temp > mx){
					mx = temp;
					dp[i] = mx;
				}
			}
		}
	}
	cout << dp[n+1];
	return (0);
}