#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n, m, k;

struct cmp{
	bool operator()(long long a, long long b){
		return a < b;
	}
};
struct cmp2{
	bool operator()(pair<int, long long> a, pair<int, long long> b){
		return a.second > b.second;
	}
};
priority_queue<long long, vector<long long>, cmp> result[1001];
vector<pair<int, int> > v[1001];

void dij(){
	priority_queue<pair<int, long long>, vector<pair<int, long long> >, cmp2 > pq;
	pq.push(make_pair(1,0));
	result[1].push(0);
	while(!pq.empty()){
		int node = pq.top().first;
		long long cost = pq.top().second;
		pq.pop();
		for (int i = 0; i<v[node].size(); i++){
			int next = v[node][i].first;
			long long dist = v[node][i].second;
			if (result[next].size() != k){
				result[next].push(cost+dist);
				pq.push(make_pair(next, dist+cost));
			}
			else{
				if (result[next].top() > cost+dist){
					result[next].pop();
					result[next].push(cost+dist);
					pq.push(make_pair(next, dist+cost));
				}
			}
		}
	}
}
int main(void){
	int a, b, c;
	cin >>n >> m >> k;
	for (int i=0; i<m; i++){
		cin >> a >> b >> c;
		v[a].push_back(make_pair(b,c));
	}
	dij();
	for (int i=1; i<=n; i++){
		if (result[i].size() < k) cout << "-1\n";
		else {
			cout << result[i].top() << "\n";
		}
	}
	return 0;
}