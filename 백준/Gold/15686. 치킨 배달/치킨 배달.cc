#include <iostream>
#include <queue>
#include <vector>
#include <cmath>

using namespace std;

int dx[4] = {0,1,0,-1};
int dy[4] = {1, 0, -1, 0};
int n, m;
vector<pair<int, int> > chick;
vector<pair<int, int> > home;

int cal(int a[][50], int x, int y){
	int temp = 10000000;
	for (int i = 0; i<chick.size(); i++)
	{
		if (a[chick[i].first][chick[i].second] == 2)
		{
			if (temp > abs(chick[i].first - x) + abs(chick[i].second - y))
				temp = abs(chick[i].first - x) + abs(chick[i].second - y);
		}
	}
	return temp;
}

void back(int a[][50], int c, int* res, int x){
	int temp;
	if (c==0){
		temp = 0;
		for (int i = 0; i<home.size(); i++)
		{
			temp += cal(a, home[i].first, home[i].second);
		}
		if (*res > temp) *res = temp;
	}
	else{
		for (int i = x; i<chick.size(); i++)
		{	a[chick[i].first][chick[i].second] = 0;
			back(a, c-1, res, i+1);
			a[chick[i].first][chick[i].second] = 2;
		}
	}
}

int	main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int m1[50][50];
	int res = 10000000;
	

	cin >> n >> m;

	for (int i=0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
		{
			cin >> m1[i][j];
			if (m1[i][j] == 2) chick.push_back(make_pair(i, j));
			if (m1[i][j] == 1) home.push_back(make_pair(i, j));
				
		}
	}
	back(m1, chick.size() - m, &res, 0);
	cout << res;
	return (0);
}