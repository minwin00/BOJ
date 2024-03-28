#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, m, p;
int d[5001];
vector<pair<int, int> > v[5001];

int dijk(int s)
{
	priority_queue<pair<int, int> > pq;
	int d[5001] = {0,};

	for (int i = 1; i<=n; i++)
	{
		d[i] = 100000000;
	}
	pq.push(make_pair(0, s));
	d[s] = 0;
	while (!pq.empty())
	{
		int curr = pq.top().second;
		int dist = -pq.top().first;
		pq.pop();
		if (d[curr] < dist) continue;
		for (int i = 0; i<v[curr].size(); i++)
		{
			int next = v[curr][i].first;
			int next_d = v[curr][i].second;
			if (next_d + d[curr] < d[next])
			{
				d[next] = next_d + d[curr];
				pq.push(make_pair(-d[next], next));
			}
		}
	}
	return (d[n] + d[1]);
}

int main(void)
{
	int a, b, c;
	cin >> n >> m >>p;
	for (int i = 0; i<m; i++)
	{
		cin >> a >> b >> c;
		v[a].push_back(make_pair(b, c));
		v[b].push_back(make_pair(a, c));
	}
	if(dijk(1) == dijk(p))
		cout <<"SAVE HIM";
	else cout << "GOOD BYE";
	return (0);
}