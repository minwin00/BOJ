#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int n, s, e, m;
int earn[51];
long long d[51];
int edge[51][3];
long long INF = -999999999999;
vector<int> v[51];

bool bfs(int sx, int e){
	int vst[51] ={0,};
	queue<int> q;
	q.push(sx);
	vst[sx]=1;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for (int i=0; i<v[x].size(); i++){
			int y = v[x][i];
			if (!vst[y]){
				vst[y]= 1;
				q.push(y);
			}
		}
	}
	if (vst[e]) return true;
	return false;
}

bool bf(){
	for (int i=0; i<n; i++){
		d[i] = INF;
	}
	d[s] = earn[s];
	for (int i=0; i<n; i++){
		for (int j=0; j<m; j++){
			int x = edge[j][0];
			int y = edge[j][1];
			int cost = edge[j][2];
			if (d[x] != INF&& d[y] < earn[y] - cost + d[x]){
				if (i==n-1){
					if (bfs(y, e)){
						cout << "Gee";
						return false;
					}
				}
				d[y] =  earn[y] -cost + d[x];
			}
		}
	}
	return true;
}

int main(void){
	cin >> n >> s >>e >>m;
	for (int i=0; i<m; i++){
		cin >> edge[i][0] >> edge[i][1] >> edge[i][2];
		v[edge[i][0]].push_back(edge[i][1]);
	}
	for (int i=0; i<n; i++){
		cin >> earn[i];
	}
	if(bf()){
		if (d[e] != INF) cout << d[e];
		else cout << "gg";
	}
	return 0;
}