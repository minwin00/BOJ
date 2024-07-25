#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dp[101][100001];

int main(void)
{
	vector<pair<int, int> > v;
	int a, b;
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		v.push_back(make_pair(a, b));
	}
	for(int j =1; j<=k; j++){
		for (int i = 1; i<=n; i++){
			if (v[i-1].first <= j){
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-v[i-1].first] +v[i-1].second);
			}
			else {
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	cout << dp[n][k];
	return 0;
}