#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

int n, m;
int d[102][101];

void dijk(int s, vector<pair<int, int> > v[101]){
	priority_queue<pair<int, int> > pq;
	d[s][s] = 0;
	pq.push(make_pair(0, s));
	while (!pq.empty())
	{
		int curr = pq.top().second;
		int dist = -pq.top().first;
		pq.pop();
		if (dist > d[s][curr]) continue;
		for (int i = 0; i<v[curr].size(); i++)
		{
			int next = v[curr][i].first;
			int next_d = v[curr][i].second;
			if (next_d + d[s][curr] < d[s][next])
			{
				d[s][next] = next_d + d[s][curr];
				pq.push(make_pair(-d[s][next], next));
			}
		}
	}
	for (int i = 1; i<=n; i++)
	{
		d[101][i] += d[s][i];
	}
}

int main(void)
{
	int t;
	int a, b, c;
	int k;
	int temp;
	int mmnn, result;
	cin >> t;
	for (int l = 0; l<t; l++)
	{
		for (int i = 1; i<102; i++)
		{
			for (int j = 1; j<101; j++)
			{
				if (i == 101) d[i][j] = 0;
				else d[i][j] = 100000000;
			}
		}
		vector<pair<int, int> > v[101];
		cin >> n >> m;
		result = 0;
		mmnn = 100000000;
		for (int i = 0; i<m;i++)
		{
			cin >> a >> b >> c;
			v[a].push_back(make_pair(b, c));
			v[b].push_back(make_pair(a, c));
		}
		cin >> k;
		for (int i = 0; i<k; i++)
		{
			cin >> temp;
			dijk(temp, v);
		}
		for (int i = 1; i<=n; i++)
		{
			if (mmnn > d[101][i]){
				mmnn = d[101][i];
				result = i;
			}
		}
		cout << result << "\n";
	}
	return (0);
}