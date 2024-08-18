#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<pair<int, int> > v[5001];
int n, m;
long long dist[5001];

class Edge{
	public:
		int a;
		long long d;
		Edge(int a, long long d){
			this->a = a;
			this->d = d;
		}
};

struct cmp{
	bool operator()(Edge a, Edge b){
		return a.d > b.d;
	}
};

void dij(int s, int t){
	priority_queue<Edge, vector<Edge>, cmp> pq;
	for (int i=0; i<=n; i++){
		dist[i] = 999999999999;
	}
	pq.push(Edge(s, 0));
	dist[s] =0;
	while(!pq.empty()){
		int x = pq.top().a;
		int cost = pq.top().d;
		pq.pop();
		if (dist[x] < cost) continue;
		for (int i=0; i<v[x].size(); i++){
			int nx = v[x][i].first;
			int ncost = v[x][i].second;
			if (dist[nx] > dist[x] + ncost){
				dist[nx] = dist[x] + ncost;
				pq.push(Edge(nx, dist[nx]));
			}
		}
	}
}
int main(void){
	int a, b, c;
	int s, t;
	cin >> n >> m;
	for (int i=0; i<m; i++){
		cin >> a >> b >> c;
		v[a].push_back(make_pair(b,c));
		v[b].push_back(make_pair(a,c));
	}
	cin >> s >> t;
	dij(s, t);
	cout << dist[t];
}