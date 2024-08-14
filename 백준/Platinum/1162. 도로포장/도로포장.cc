#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<pair<int, int> > v[10001];
long long dp[10001][21];
int n, m, k;

class info{
	public:
		int node;
		int cnt;
		long long cost;
		info(int n, int c, long long co){
			this->node = n;
			this->cnt = c;
			this->cost = co;
		}
};

struct cmp{
	bool operator()(info a, info b){
		return a.cost > b.cost;
	}
};

void dij(){
	priority_queue<info, vector<info>, cmp> pq;
	pq.push(info(1,0,0));
	dp[1][0] =0;
	while(!pq.empty()){
		int node = pq.top().node;
		int cnt = pq.top().cnt;
		long long cost = pq.top().cost;
		pq.pop();
		if (dp[node][cnt] < cost) continue;
		for (int i=0; i<v[node].size(); i++){
			int next = v[node][i].first;
			long long dist = v[node][i].second;
			if (cost+ dist < dp[next][cnt]){
				dp[next][cnt]= cost + dist;
				pq.push(info(next, cnt, dp[next][cnt]));
			}
			if (cnt <k && cost < dp[next][cnt+1]){
				dp[next][cnt+1] = cost;
				pq.push(info(next, cnt+1, dp[next][cnt+1]));
			}
		}
	}
}
int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	long long mn=9223372036854775800;
	cin >>n >> m >> k;
	for (int i=1; i<=n; i++){
		for (int j=0; j<=k; j++){
			dp[i][j] = 9223372036854775800;
		}
	}
	for (int i=0;i<m; i++){
		cin >> a >> b >> c;
		v[a].push_back(make_pair(b,c));
		v[b].push_back(make_pair(a,c));
	}
	dij();
	for (int i=0; i<=k; i++){
		mn = min(mn, dp[n][i]);
	}
	cout << mn;
}