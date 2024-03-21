#include <iostream>
#include <vector>
#include <queue>
#define INF 100000000

using namespace std;

int d[10001];

void dijkstra(vector<pair<int, int> > v[10001], int s)
{
	priority_queue<pair<int, int> > pq;
	pq.push(make_pair(0, s));
	d[s] = 0;
	while (!pq.empty()){
		int dist = -pq.top().first;
		int curr = pq.top().second;
		pq.pop();
		if (dist > d[curr]) continue;
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
}
int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int k, l, s;
	int a, b, c;
	int mmxx, cnt;
	cin >> n;
	for (int ii = 0; ii<n; ii++)
	{
		vector<pair<int, int> > v[10001];
		cin >> k >> l >> s;
		for (int i = 1; i<=k; i++)
		{
			d[i] = INF;
		}
		for (int i = 0; i<l; i++)
		{
			cin >> a >> b>> c;
			// v[a].push_back(make_pair(b, c));
			v[b].push_back(make_pair(a, c));
		}
		dijkstra(v, s);
		mmxx = 0;
		cnt = 0;
		for (int i = 1; i<=k; i++)
		{
			if (d[i] == INF) continue;
			else{
				cnt++;
				if (d[i] > mmxx) mmxx = d[i];
			}
		}
		cout << cnt << " " << mmxx << "\n";
	}
	return (0);
}