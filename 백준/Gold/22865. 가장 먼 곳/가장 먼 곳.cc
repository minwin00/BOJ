#include <iostream>
#include <vector>
#include <queue>

#define INF 1000000000

using namespace std;

vector<pair<int, int> > v[100001];
int res[100001];
int n;

void dijkstra(int start){
	int d[100001];
	for (int i =1; i<=n; i++)
	{
		d[i] = INF;
	}
	d[start] = 0;
	res[start] = 0;
	priority_queue<pair<int, int> > pq;
	pq.push(make_pair(0, start));
	while(!pq.empty()){
		int current = pq.top().second;
		int distance = -pq.top().first;
		pq.pop();
		if (d[current] < distance) continue;
		for (int i =0; i< v[current].size(); i++)
		{
			int next = v[current][i].first;
			int next_d = v[current][i].second;
			if (d[next] > d[current] + next_d)
			{
				d[next] = d[current] + next_d;
				pq.push(make_pair(-d[next], next));
				if (res[next] > d[next]) res[next] = d[next];
			}
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int a, b, c;
	int d, e;
	int dist;
	int m;
	int mmxx = 0;
	int result = 0;

	cin >> n;
	cin >> a >> b >> c;
	cin >> m;

	for (int i =1; i<=n; i++)
	{
		res[i] = INF;
	}
	for (int i = 0; i<m; i++)
	{
		cin >> d >> e >> dist;
		v[d].push_back(make_pair(e, dist));
		v[e].push_back(make_pair(d, dist));
	}
	dijkstra(a);
	dijkstra(b);
	dijkstra(c);
	for (int i =1; i<=n; i++)
	{
		if(mmxx < res[i]) {
			mmxx = res[i];
			result = i;
		};
	}
	cout << result;
	return (0);
}