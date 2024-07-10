#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int a[101][101];
int dist[101][101];
int dx[4] = {0,1,0,-1};
int dy[4] = {1,0,-1,0};
int n, m;

void bfs(){
	queue<pair<int, int> > q;
	q.push(make_pair(0,0));
	dist[0][0] = 0;
	while (!q.empty()){
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i =0; i<4; i++){
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && nx <m && ny >=0 && ny <n){
				if (dist[nx][ny] > dist[x][y] + a[nx][ny]){
					dist[nx][ny] = dist[x][y] + a[nx][ny];
					q.push(make_pair(nx,ny));
				}
			}
		}
	}
}

int main(void){
	char c;
	cin >> n >> m;
	for (int i = 0; i<m; i++){
		for (int j = 0 ;j<n; j++){
			cin >> c;
			a[i][j] = c - '0';
		}
	}
	for (int i = 0; i<m; i++){
		for (int j = 0; j<n; j++){
			dist[i][j] = 99999999;
		}
	}
	bfs();
	cout << dist[m-1][n-1];
	return 0;
}